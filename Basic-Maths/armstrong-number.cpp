#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
  int dub=n;
  int sum=0;
  int digits;
  if(n==0)digits=1;
  else digits=log10(n)+1;

  while(n>0){
    int lastDigit=n%10;
    sum=sum+pow(lastDigit,digits);
    n=n/10;
  }

  return (sum==dub);
  
}

int main(){
  int n;
  cin>>n;
  if(isArmstrong(n)) cout << "true";
  else cout << "false";
  return 0;
}