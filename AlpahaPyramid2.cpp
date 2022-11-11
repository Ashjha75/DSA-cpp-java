#include<bits/stdc++.h>
using namespace std;

int printAlpaha(int num, int k){
  if(num==0)
    return k;
  cout<<char(k+64);
 printAlpaha(num-1,k+1);
  
}
void pattern(int n,int i,int k){
  if(n==0)
    return;
 k = printAlpaha(i,k);
  cout<<endl;
  pattern(n-1,i+1,k);
}
int main(){
  int n;
  cout<<"enter the number of rows :: "<<endl;
  cin>>n;
  pattern(n,1,1);
  return 0;
}
