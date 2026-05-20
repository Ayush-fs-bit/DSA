#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)cin>>arr[i];

  unordered_map<int,int> mpp;
  
  for(int i=0;i<n;i++){
    mpp[arr[i]]+=1;
  }

  int maxFreq=1;
  int maxElement;
  int minFreq=100;
  int minElement;

  for(auto it:mpp){
    if(it.second>maxFreq){
      maxFreq=it.second;
      maxElement=it.first;
    }
    if(it.second<minFreq){
      minFreq=it.second;
      minElement=it.first;
    }
  }

  cout<<maxElement<<"->"<<maxFreq<<endl;
  cout<<minElement<<"->"<<minFreq<<endl;

  return 0;
}