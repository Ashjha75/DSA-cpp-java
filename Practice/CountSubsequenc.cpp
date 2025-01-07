//program to count the number of subsequences having sum equal to K
#include<bits/stdc++.h>
using namespace std;

int PrintSubsequence(int ind,int arr[],int n,int sum,int s){

  if(ind==n){
    if(s==sum)
    {
      return 1;
    }
    return 0;
  }

  s+=arr[ind];
  int left=PrintSubsequence(ind+1,arr,n,sum,s);
  s-=arr[ind];
  int right=PrintSubsequence(ind+1,arr,n,sum,s);
  return (left+right);
}
 

int main(){
  int arr[]={6,2,4,4,1,5};
  int n=6;
  int sum=6;
 cout<<"The number of subsequence that have sum eaual to given sum" <<" :: "<<PrintSubsequence(0,arr,n,sum,0);
  return 0;
