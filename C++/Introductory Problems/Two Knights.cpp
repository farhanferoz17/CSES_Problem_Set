#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin >> n;
  ll ans;

  for(int i=0;i<n;i++){
    ans = ((i)*(i+5)*(i*i - i + 2))/2;
    cout << ans << endl;
  }
  
  return 0;
}
