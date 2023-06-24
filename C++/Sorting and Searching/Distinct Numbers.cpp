#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end());
  int ct = 1;
  for(int i=1;i<n;i++){
    if(nums[i]!=nums[i-1]){
      ct++;
    }
  }
  cout << ct << endl;
  return 0;
}
