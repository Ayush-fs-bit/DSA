#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums,int n){
  for(int i=0;i<n-1;i++){
    if(nums[i]>nums[i+1]){
      return false;
    }
  }
  return true;
}


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  if(isSorted(nums,n)){
    cout<<"Sorted";
  }
  else{
    cout<<"Not Sorted";
  }
  return 0;
}