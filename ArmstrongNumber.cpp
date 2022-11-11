Armstrong Numbes
#include<bits/stdc++.h>
using namespace std;


int count(int x,int c){
  if(x==0)
    return c;
 return count(x/10,c+1);  
}
 
int  isArmstrong(int n,int c,int sum){
  if(n==0)
    return sum;
  int digit=n%10;
  sum=sum+pow(digit,c);
  return isArmstrong(n/10,c,sum);
}
int main(){
  int n;
  cout<<"Enter the Number:: "<<endl;
  cin>>n;
  int x=count(n,0);
  
  if(n==isArmstrong(n,x,0))
    cout<<"yes::";
  
  else
    cout<<"No";
  
  return 0;

  
}
