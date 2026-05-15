#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
  if(n<0)return false;
  int copy=n;
  int reverseDigits=0;
  while(n>0){
    int lastDigit=n%10;
    reverseDigits=(reverseDigits*10)+lastDigit;
    n=n/10;
  }
  return (copy==reverseDigits);
}

int main(){
  int n;
  cin>>n;
  if(isPalindrome(n))cout<<"true";
  else cout<<"false";
  return 0;
}