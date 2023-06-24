#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;
int main()
{
  ll n;
  cin >> n;
  
  ll ans = 0, p = 5;
  while(p <= n){
    ans += (n/p);
    p *= 5;
  }
  cout << ans << endl;
  return 0;
}
