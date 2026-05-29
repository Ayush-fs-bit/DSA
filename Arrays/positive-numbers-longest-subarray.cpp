#include <bits/stdc++.h>
using namespace std;

int ls(vector<int>& nums,int n,int k){
  int i=0;
  int j=0;
  int sum=0;
  int maxLenght=0;
  while(j<n){
    sum+=nums[j];
    if(sum==k){
      maxLenght=max(maxLenght,j-i+1);
    }
    while(sum>k && i<=j){
      sum-=nums[i];
      i++;
      if(sum==k){
        maxLenght=max(maxLenght,j-i+1);
      }
    }
    j++;
  }
  return maxLenght;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  int k;
  cin>>k;

  cout<<ls(nums,n,k);
  return 0;
}