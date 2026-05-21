#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(int n,vector<int>& nums){
  for(int i=n-1;i>=1;i--){
    int swapCounter=0;
    for(int j=0;j<i;j++){
      if(nums[j]>nums[j+1]){
        int temp=nums[j];
        nums[j]=nums[j+1];
        nums[j+1]=temp;
        swapCounter=1;
      }
      }
      if(swapCounter==0){
      break;
    }
    
  }
  return nums;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  vector<int> result=bubbleSort(n,nums);
  for(auto it:result){
    cout<<it<<" ";
  }
  return 0;
}