#include <bits/stdc++.h>
using namespace std;

pair<int,int> ts(vector<int>& nums,int n,int target){
  unordered_map<int,int> prev;
  for(int i=0;i<n;i++){
    int sum=nums[i];
    int needed=target-sum;
    if(prev.find(needed)!=prev.end()){
      return {prev[needed],i};
    }
    prev[sum]=i;
  }
  return {-1,-1};
}

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];

  int target;
  cin>>target;

  pair<int,int>result=ts(nums,n,target);

  cout<<result.first<<" "<<result.second;

  return 0;
}