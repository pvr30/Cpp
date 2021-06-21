/*
---------Minimize the maximum difference between the heights----- Most Important


Given heights of n towers and a value k. We need to either increase or 
decrease height of every tower by k (only once) where k > 0. 
The task is to minimize the difference between the heights of the longest
and the shortest tower after modifications, and output this difference.


Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output: 5
Explanation: The array can be modified as 
{3, 3, 6, 8}. The difference between 
the largest and the smallest is 8-3 = 5.
------

Example 2:

Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output: 11
Explanation: The array can be modified as
{6, 12, 9, 13, 17}. The difference between 
the largest and the smallest is 17-6 = 11.

 */


#include<iostream>
#include<algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
        // code here
    sort(arr, arr+n);
    int minEle, maxEle;
    int result = arr[n-1] - arr[0];

    for(int i =1; i<=n-1; i++){
    if(arr[i]>=k){
    maxEle = max(arr[i-1] + k, arr[n-1]-k);
    minEle = min(arr[0]+k, arr[i]-k);

    result = min(result, maxEle-minEle);
    }
    else continue;
    }
    return result;
}
int main(){
    int arr[]={6,1,9,1,1,7,9,5,2,10};
    cout<<getMinDiff(arr,10,4)<<endl;
    return 0;
}
