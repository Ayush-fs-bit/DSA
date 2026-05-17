#include<bits/stdc++.h>
using namespace std;

void printNumbers(int n,int i){
  if(i>n)return;
  cout<<i<<" ";
  printNumbers(n,i+1);
}

// Alternative backtracking approach


// void printNumbers(int n,int cnt) {
//         if(cnt<1)return;
//         printNumbers(n,cnt-1);
//         cout<<cnt<<" ";
//         cnt+=1;
// }

int main(){
  int n;
  cin>>n;
  printNumbers(n,1);
  return 0;
}