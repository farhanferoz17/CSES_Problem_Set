#include<bits/stdc++.h>
using namespace std;

int main()
{
  string x;
  cin >> x;
  int cur=1,ans=0;
  for(int i=1;i<x.length();i++){
    if(x[i]==x[i-1]){
      cur++;
      ans = max(cur,ans);
    }
    else{
      cur = 1;
    }
  }
  cout << ans << endl;
  return 0;
}
