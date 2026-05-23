#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& nums,int n){
  int largest=INT_MIN;
  int slargest=INT_MIN;
  for(int i=0;i<n;i++){
    if(nums[i]>largest){
      slargest=largest;
      largest=nums[i];
    }
    else if(nums[i]>slargest && nums[i]!=largest){
      slargest=nums[i];
    }
  }
  if(slargest!=INT_MIN)return slargest;
  return -1;
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  int result=secondLargest(nums,n);
  if(result !=-1)cout<<result;
  else cout<<"no second largest";
  return 0;
}