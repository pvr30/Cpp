#include<iostream>
using namespace std;


/*
// Recursion Solution Time Consuming 
int minJumps(int arr[], int n){
    // Your code here
   static int i=0,nojumps=0;
        i=arr[i]+i;
        nojumps++;
    if(i<n-1){minJumps(arr,n);}
        return nojumps; 
 }
 // My Solution Time Consuming Time Complexity-O(nlogn)
 int minJumps(int arr[], int n){
        int nojumps=0;
        for(int i=0;i<n-1;){
            i=arr[i]+i;
            nojumps++;
        }
        return nojumps;
} 
*/

// GFG Solution -O(n)
int minJumps(int arr[], int n){
    if(n<=1){return 0;}
    if(arr[0]==0){return -1;}
    int maxrange=arr[0],step=arr[0],jump=1;
    for(int i=1;i<n;i++){
        if (i == n - 1) {return jump;}
        maxrange = max(maxrange,i+arr[i]);
        step--;
        if (step == 0) {
            jump++;
            if(i>=maxrange){return -1;}
            step = maxrange - i;
        }
    }
    return jump;
}

int main()
{
   // int arr[]={1, 3, 6, 3, 2, 3, 6, 8, 9, 5};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minJumps(arr,n)<<endl;
    return 0;
}
