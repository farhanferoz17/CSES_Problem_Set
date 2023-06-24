#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin >> n;
  ll ans;

  for(ll i=0;i<n;i++){                                  // Be careful about the data type of the iterator
    ans = ((i*i)*(i*i - 1) / 2) - (4 * (i-2) * (i-1));  // The explanation is written after the code blocks
    cout << ans << endl;
  }
  
  return 0;
}

/*
Explanation: Total ways to place two knights (i*i) choose 2 i.e. (i*i)*(i*i - 1)/2
Positions where they can attack each other: 4*(i-2)*(i-1)
*/
