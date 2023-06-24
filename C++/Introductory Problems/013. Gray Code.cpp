#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;
int main()
{
  ll n;
  cin >> n;

  vector<string> vs;
  vs.push_back("0");
  vs.push_back("1");

  for(int i=1; i<n;i++){
    for(int j=vs.size(); j>0; j--){
      vs.push_back(vs[j-1]);
    }
    int half = vs.size()/2;
    for(int j=0; j<half; j++){
      vs[j] = "0" + vs[j];
      vs[j+half] = "1" + vs[j+half];
    }
  }

  for(int i=0; i<vs.size(); i++){
    cout << vs[i] << endl;
  }

  return 0;
}
