Program to print the SubSequences of array
#include<bits/stdc++.h>
using namespace std;
void  Print_SubSequence(int arr[],vector<int> &ds,int n,int ind){

  if(ind==n){
    for(auto it:ds){
      cout<<it<<" ";
    }
    if(ds.size()==0){
      cout<<"{}";
    }
    cout<<endl;
    return ;
  }

  ds.push_back(arr[ind]);
  Print_SubSequence(arr,ds,n,ind+1);
  ds.pop_back();
  Print_SubSequence(arr,ds,n,ind+1);
  
  
}
int main(){
  int arr[]={1,2,5};
  int n=3;
  vector<int> ds;
  Print_SubSequence(arr,ds,n,0);
  return 0;
}
