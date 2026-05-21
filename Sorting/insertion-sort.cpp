#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(int n,vector<int>& nums){
  for(int i=1;i<n;i++){
    int q=i;
    while(q>0 && nums[q]<nums[q-1]){
      int temp=nums[q];
      nums[q]=nums[q-1];
      nums[q-1]=temp;
      q--;
    }
  }
  return nums;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  vector<int> result=insertionSort(n,nums);
  for(auto it:result){
    cout<<it<<" ";
  }
  return 0;
}