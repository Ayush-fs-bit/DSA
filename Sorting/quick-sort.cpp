#include <bits/stdc++.h>
using namespace std;

int pindex(vector<int>& nums,int low,int high){
  int i=low;
  int j=high;
  int pivot=low;
  while(i<j){
    while(nums[i]<=nums[pivot] && i<=high){
      i++;
    }
    while(nums[j]>nums[pivot] && j>=low){
      j--;
    }
    if(i<j){
      swap(nums[i],nums[j]);
    }
  }
  if(i>j){
    swap(nums[j],nums[pivot]);
    return j;
  }
}

void qs(vector<int>& nums,int low,int high){
    if(low>=high)return;
    int pivotIndex=pindex(nums,low,high);
    qs(nums,low,pivotIndex-1);
    qs(nums,pivotIndex+1,high);
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  qs(nums,0,n-1);

  for(auto it:nums){
    cout<<it<<" ";
  }

  return 0;
}