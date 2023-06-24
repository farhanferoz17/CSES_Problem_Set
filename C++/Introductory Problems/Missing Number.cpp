#include<bits/stdc++.h>
using namespace std;

int main()
{
  ll n,x,summ=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;
    summ += x;
  }
  ll total = (n*(n+1))/2;
  ll missing = total - summ;
  cout << missing << endl;
  return 0;
}
