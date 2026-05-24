#include <bits/stdc++.h>
using namespace std;

vector<int> moveZero(vector<int>& nums,int n){
  int j=-1;
  for(int i=0;i<n;i++){
    if(nums[i]==0){
      j=i;
      break;
    }
  }
  if(j==-1)return nums;
  for(int i=j+1;i<n;i++){
    if(nums[i]!=0){
      swap(nums[j],nums[i]);
      j++;
    }
  }
  return nums;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  moveZero(nums,n);

  for(auto it:nums){
    cout<<it<<" ";
  }

  return 0;
}