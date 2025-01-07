#include<bits/stdc++.h>
using namespace std;

void printAlpaha(int num, int k){
  if(num==0)
    return;
  cout<<char(k+96);
  printAlpaha(num-1,k+1);
  
}
void pattern(int n,int i){
  if(n==0)
    return;
  printAlpaha(i,1);
  cout<<endl;
  pattern(n-1,i+1);
}
int main(){
  int n;
  cout<<"enter the number of rows :: "<<endl;
  cin>>n;
  pattern(n,1);
  return 0;
}
