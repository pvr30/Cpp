/*
Given two sorted arrays arr1[] of size N and arr2[] of size M.
Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array
 in non-decreasing order without using any extra space.

Example 1:

Input:
N = 4, M = 5
arr1[] = {1, 3, 5, 7}
arr2[] = {0, 2, 6, 8, 9}
Output: 0 1 2 3 5 6 7 8 9
Explanation: Since you can't use any 
extra space, modify the given arrays
to form 
arr1[] = {0, 1, 2, 3}
arr2[] = {5, 6, 7, 8, 9}
*/


#include<iostream>
#include<algorithm>
using namespace std;
void merge(int arr1[],int arr2[],int n,int m){
    // Solution 1:-
     for(int i=0;i<n;i++){
        if(arr1[i]>arr2[0]){
            int temp;
            temp=arr2[0];
            arr2[0]=arr1[i];
            arr1[i]=temp;
            //swap(arr1[i],arr2[0]);
            sort(arr2,arr2+m);
        }
    }

    //Solution 2:- optimize Solution.
    int j = 0, i = n-1;
    while(j < m && i > -1 && arr2[j] < arr1[i]){
        swap(arr2[j++],arr1[i--]);
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}
int main(){
    int a1[]={1, 3, 5, 7},a2[]={0, 2, 6, 8, 9};
    merge(a1,a2,4,5);
    return 0;
}