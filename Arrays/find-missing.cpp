#include <bits/stdc++.h>
using namespace std;

int mn(vector<int>& nums,int n){
  int xor1=0;
  int xor2=0;
  for(int i=0;i<n;i++){
    xor1=xor1^(i+1);
    xor2=xor2^nums[i];
  }
  return xor1^xor2;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  cout<<mn(nums,n);
  return 0;
}