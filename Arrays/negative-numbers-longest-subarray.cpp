#include <bits/stdc++.h>
using namespace std;

int ls(vector<int>& nums,int n,int k){
  unordered_map<int,int> preSums;
  int sum=0;
  int maxCount=0;
  for(int i=0;i<n;i++){
    sum+=nums[i];

    if(preSums.find(sum) == preSums.end()){
       preSums[sum]=i;
    }
   
    if(sum==k){
      maxCount=max(maxCount,i+1);
    }
    
    int rem=sum-k;
    if(preSums.find(rem) != preSums.end()){
        maxCount=max(maxCount,i-preSums[rem]);
    }
    
    
  }
  return maxCount;
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