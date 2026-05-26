#include <bits/stdc++.h>
using namespace std;

int sn(vector<int>& nums,int n){
  int xor1=0;
  for(int i=0;i<n;i++){
    xor1=xor1^nums[i];
  }
  return xor1;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  cout<<sn(nums,n);
  return 0;
}