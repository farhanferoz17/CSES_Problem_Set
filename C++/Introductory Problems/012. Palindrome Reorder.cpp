#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;
int main()
{
  string x;
  cin >> x;
  int odd_count = 0;
  int n = x.length();
  vector<int> char_count(26,0);
  for(int i=0; i<n; i++){
    int w = ++char_count[x[i] - 'A'];
    if(w&1) odd_count++;
    else odd_count--;
  }

  if( (odd_count!=1) && (n&1) || (odd_count!=0) && !(n&1) ){
    cout << "NO SOLUTION\n";
  }
  else{
    int j = 0;
    for(int i=0;i<26;i++){
      if(char_count[i]>1){
        x[j++] = i+'A';
        x[n-j] = x[j-1];
        char_count[i]-=2;
        i--;
      }
      else if(char_count[i] == 1){
        x[n/2] = i+'A';
      }
    }
    cout << x << endl;
  }

  return 0;
}
