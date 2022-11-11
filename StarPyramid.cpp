#include<bits/stdc++.h>
using namespace std;

void printStar(int i){
  if(i==0)
    return;
  cout<<"*";
  printStar(i-1);
}
void   printSpace(int num){
  if(num==0)
    return;
  cout<<" ";
  printSpace(num-1);
  
}
void pattern(int n,int i){
  if(n==0)
    return ;
  printSpace(n);
  printStar((2*i)-1);
  cout<<endl;
  pattern(n-1,i+1);
}

int main(){
  int n;
  cout<<"Enter the rows number:: "<<endl;
  cin>>n;
  pattern(n,1);
  return 0;
}
