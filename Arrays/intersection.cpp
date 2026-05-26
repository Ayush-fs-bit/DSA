#include <bits/stdc++.h>
using namespace std;

vector<int> ia(vector<int>& nums1,vector<int>& nums2,int n1,int n2){
  int i=0; 
  int j=0;
  vector<int> result;
  while(i<n1 && j<n2){
    if(nums1[i]<nums2[j]){
      i++;
    }else if(nums1[i]>nums2[j]){
      j++;
    }else{
      result.push_back(nums1[i]);
      i++;
      j++;
    }
  }

  return result;

}

int main(){
  int n1;
  cin>>n1;
  vector<int> nums1(n1);
  for(int i=0;i<n1;i++)cin>>nums1[i];
  int n2;
  cin>>n2;
  vector<int> nums2(n2);
  for(int i=0;i<n2;i++)cin>>nums2[i];

  vector<int> result=ia(nums1,nums2,n1,n2);

  for(auto it:result){
    cout<<it<<" ";
  }
  return 0;

}