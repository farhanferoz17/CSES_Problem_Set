#include<bits/stdc++.h>
using namespace std;

void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
typedef long long int ll;
const int N = 2e5+7;
int ara[N];
ll tree[4*N];
int n;

void print_tree()
{
    cout << "Printing the tree:\n";
    for(int i=1;i<=2*n;i++)
        cout << tree[i] << " ";

    cout << endl;
}

void build(int i, int l, int r)
{
    if(l==r)
    {
        tree[i] = ara[l];
        return;
    }
    int mid = (l+r)/2;

    build(2*i, l, mid);
    build(2*i+1, mid+1, r);

    tree[i] = tree[2*i] + tree[2*i+1];
    return;
}

void update(int i, int l, int r, int k, ll u)
{
    if(l==r)
    {
        tree[i] = u;
        return;
    }
    int mid = (l+r)/2;

    if(k<=mid)
        update(2*i, l, mid, k, u);
    else
        update(2*i+1, mid+1, r, k, u);

    tree[i] = tree[2*i] + tree[2*i+1];
    return;
}

ll query(int i, int l, int r, int a, int b)
{
    if(b<l || a>r) //segment completely outside
        return 0;
    else if(a<=l && r<=b) //segment completely inside
        return tree[i];

    int mid=(l+r)/2;

    ll p = query(2*i, l, mid, a, b);
    ll q = query(2*i+1, mid+1, r, a, b);

    return p+q;
}

int main()
{
    init_code();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int q;

    cin >> n >> q;
    for(int i=1;i<=n;i++)
    {
        cin >> ara[i];
    }

    build(1, 1, n);

    //print_tree();

    while(q--)
    {
        int t;
        cin >> t;
        if(t==1)
        {
            int k;
            ll u;
            cin >> k >> u;
            update(1,1,n,k,u);
            //print_tree();
        }
        else
        {
            int a,b;
            cin >> a >> b;
            cout << query(1,1,n,a,b) << endl;
        }
    }
    
    return 0;
}
