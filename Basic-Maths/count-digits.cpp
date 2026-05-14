#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
  if(n==0)return 1;
  int cnt=0;
  while(n>0){
    n=n/10;
    cnt += 1;
  }
  return cnt;
}

int main(){
  int n;
  cin>>n;
  cout<<countDigit(n);
  return 0;
}