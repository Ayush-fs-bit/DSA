#include <bits/stdc++.h>
using namespace std;

void is(vector<int>& nums,int low,int high){
  int i=low;
  if(i>high)return;
  while(i>0){
    if(nums[i-1]>nums[i]){
    swap(nums[i],nums[i-1]);
    i--; 
    }
    else{
      break;
    }
  }
  is(nums,low+1,high);
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  is(nums,0,n-1);

  for(auto it:nums){
    cout<<it<<' ';
  }

  return 0;
}