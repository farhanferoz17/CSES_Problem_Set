#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin >> n;
  if(n>=2 && n<=3){
    cout << "NO SOLUTION\n";
  }
  else{
    for(int i=2;i<=n;i+=2){
      cout << i << " ";
    }
    for(int i=1;i<=n;i+=2){
      cout << i << " ";
    }
  }
  return 0;
}
