#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(int n,vector<int>& nums){
  for(int i=0;i<n-1;i++){
    int minIndex=i;
    for(int j=i;j<=n-1;j++){
      if(nums[minIndex]>nums[j]){
        minIndex=j;
      }
    }
    int temp=nums[minIndex];
    nums[minIndex]=nums[i];
    nums[i]=temp;
  }
  return nums;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  vector<int> result=selectionSort(n,nums);
  for(auto it:result){
    cout<<it<<" ";
  }
  return 0;
}