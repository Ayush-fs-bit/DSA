#include <bits/stdc++.h>
using namespace std;

int largest(vector<int>& nums){
  int n=nums.size();
  int highest=nums[0];
  for(int i=0;i<n;i++){
    if(nums[i]>highest){
      highest=nums[i];
    }
  }
  return highest;
}


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  cout<<largest(nums);
  return 0;
}