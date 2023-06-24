#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;
int main()
{
  ll n;
  cin >> n;

  while(n--){
    int a,b;
    cin >> a >> b;

    if(2*a < b || 2*b < a)
      cout << "NO\n";
    else if((a+b)%3 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  return 0;
}
