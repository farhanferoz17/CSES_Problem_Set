#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n;
  cin >> n;
  ll cost = 0;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin >> nums[i];
  }
  for(int i=1;i<n;i++){
    if(nums[i] < nums[i-1]){
      cost += (nums[i-1] - nums[i]);
      nums[i] = nums[i-1];
    }
  }

  cout << cost << endl;
  return 0;
}
