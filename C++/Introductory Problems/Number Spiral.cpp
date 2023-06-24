#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin >> n;
  ll x,y,ans,k;
  for(int i=0;i<n;i++){
    cin >> x >> y;
    k = max(x,y);
    ans = (k-1)*(k-1);
    if(k&1){
      ans += (y + k - x);
    }
    else{
      ans += (x + k - y);
    }
    cout << ans << endl;
  }
  return 0;
}
