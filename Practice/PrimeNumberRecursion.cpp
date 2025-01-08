// prime number questions 
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n,int i){
  if(n<=2)
    return ((n==2)?1:0);
  if(n%i==0)
    return 0;
  if(i*i>=n)
    return 1;
  isPrime(n,i+1);
}
void printPrimes(int n) {
  if(n<=1)
    return;
  if(isPrime(n,2)){
    cout<<n<<"  ";
  }
  printPrimes(n-1);
}

int main(){
  int n;
  cout<<"Enter the number "<<endl;
  cin>>n;
  printPrimes(n);
  return 0;
}
