#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums,int n) {
    int cnt=0;
    int ele;
    int cnt1=0;
    for(int i=0;i<n;i++){
      if(cnt==0){
        cnt=1;
        ele=nums[i];
      }else if(nums[i]==ele){
        cnt++;
      }else{
        cnt--;
      }
    }
    for(int i=0;i<n;i++){
      if(nums[i]==ele)cnt1++;
    }
    if(cnt1>n/2){
      return ele;
    }
    return -1;
  }

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++)cin>>nums[i];
  
  cout<<majorityElement(nums,n);

  return 0;
}