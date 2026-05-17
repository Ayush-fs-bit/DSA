#include <bits/stdc++.h>
using namespace std;

void printNumbers(int n,int i){
  if(i<1)return;
  cout<<i<<" ";
  printNumbers(n,i-1);
}

// Alternative backtracking approach

// int cnt=1;
// void printNumbers(int n) {
//         if(cnt>n)return;
//         cnt+=1;
//         printNumbers(n);
//         cnt--;
//         cout<<cnt<<endl; 
// }

int main(){
  int n;
  cin>>n;
  printNumbers(n,n);
  return 0;
}