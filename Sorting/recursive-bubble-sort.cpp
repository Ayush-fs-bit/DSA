#include <bits/stdc++.h>
using namespace std;

void bs(vector<int>& nums,int low,int high){
  if(high == 0)return;
  int i=low;
  while(i<high){
    if(nums[i]>nums[i+1]){
      swap(nums[i],nums[i+1]);
      i++;
    }
    else{
      i++;
    }
  }
  bs(nums,low,high-1);
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  bs(nums,0,n-1);

  for(auto it:nums){
    cout<<it<<' ';
  }

  return 0;
}