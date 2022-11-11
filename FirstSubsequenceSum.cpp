// Program to find the 1st Sub sequence that give the given Sum K
#include<bits/stdc++.h>
using namespace std;

 bool PrintFirstSubsequence(int ind,int arr[],int n,int sum,int s,vector<int> &ds){

    if(ind==n){
      if(s==sum){
        for(auto it:ds)
          cout<<it<<" ";        
        return true;
      }
      return false;
    }

   ds.push_back(arr[ind]);
   s+=arr[ind];
   if(PrintFirstSubsequence(ind+1,arr,n,sum,s,ds)==true){return true;}
   s-=arr[ind];
   ds.pop_back();
   if(PrintFirstSubsequence(ind+1,arr,n,sum,s,ds)==true){return true;}

   return false;
 }

int main(){
  int arr[]={1,2,3};
  int n=3;
  int sum=3;

  vector<int> ds;
  PrintFirstSubsequence(0,arr,n,sum,0,ds);
   
  return 0;
}
