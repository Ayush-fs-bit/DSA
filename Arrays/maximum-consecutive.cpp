#include <bits/stdc++.h>
using namespace std;

int mc(vector<int>& nums,int n){
  int high=0;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(nums[i]==1){
      cnt+=1;
    }else{
      high=max(high,cnt);
      cnt=0;
    }
  }

  high=max(high,cnt);

  return high;
}


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  cout<<mc(nums,n);
  return 0;
}