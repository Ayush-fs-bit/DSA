#include <bits/stdc++.h>
using namespace std;

vector<int> ua(vector<int>& nums1,vector<int>& nums2){
  vector<int> unionArray;
  int i=0;
  int j=0;
  while(i<nums1.size() && j<nums2.size()){
    if(nums1[i]<=nums2[j]){
      if(unionArray.size()==0||unionArray.back()!=nums1[i]){
        unionArray.push_back(nums1[i]);
      }
      i++;
    }
    else{
      if(unionArray.size()==0||nums2[j]!=unionArray.back()){
        unionArray.push_back(nums2[j]);
      }
      j++;
    }
  }
  while(i<nums1.size()){
    if(nums1[i]!=unionArray.back()){
      unionArray.push_back(nums1[i]);
    }
    i++;
  }

  while(j<nums2.size()){
    if(nums2[j]!=unionArray.back()){
      unionArray.push_back(nums2[j]);
    }
    j++;
  }

  return unionArray;
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

  vector<int> result=ua(nums1,nums2);

  for(auto it:result){
    cout<<it<<" ";
  }
  return 0;

}