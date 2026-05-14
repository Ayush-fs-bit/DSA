#include <bits/stdc++.h>
using namespace std;

long long reverseNumber(long long n)
{
  long long reversedNum = 0;
  bool isNegative=n<0;
  if(isNegative)n=-n;
  while (n > 0)
  {
    int lastDigit = n % 10;
    n = n / 10;
    reversedNum = (reversedNum * 10) + lastDigit;
  }
  if(isNegative)return -reversedNum;
  return reversedNum;
}

int main(){
  long long n;
  cin>>n;
  cout<<reverseNumber(n);
  return 0;
}