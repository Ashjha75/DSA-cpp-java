SUm of triangle GFG

48 
20 28 
8 12 16 
3 5 7 9 
1 2 3 4 5 	
	
	
	#include<bits/stdc++.h>
using namespace std;

void fun(int array[] ,int n){
    if(n<1){
        return;
    }
    
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        int sum=array[i]+array[i+1];
        temp[i]=sum;
    }
    
    fun(temp, n-1);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
        
    }
    cout<<"\n";
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    fun(arr,n);
    return 0;
}
