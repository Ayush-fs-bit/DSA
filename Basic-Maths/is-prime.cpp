#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  int cnt=0;
  if(n <= 1) return false;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      cnt++;
      if(i != n/i)cnt++;
    }
    
  }
  return (cnt==2);

}

int main(){
  int n;
  cin>>n;
  if(isPrime(n))cout<<"true";
  else cout<<"false";
  return 0;
}