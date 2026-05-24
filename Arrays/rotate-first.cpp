#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums,int n){
  int temp=nums[0];

  for(int i=1;i<n;i++){
    nums[i-1]=nums[i];
  }
  nums[n-1]=temp;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  rotateArray(nums,n);

  for(auto it:nums){
    cout<<it<<" ";
  }

  return 0;
}