#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums,int n,int d){
 reverse(nums.begin(),nums.begin()+d);
 reverse(nums.begin()+d,nums.end());
 reverse(nums.begin(),nums.end());
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  int d;
  cin>>d;

  rotateArray(nums,n,d);

  for(auto it:nums){
    cout<<it<<" ";
  }

  return 0;
}