#include<iostream>
using namespace std;

// 1. Finding Pair Of Element With Sum K In UnSorted Array. TC:-O(n^2)
void find_pair_of_element_with_sum_k(int A[],int length,int k){
   for(int i=0;i<length;i++){
       for(int j=i+1;j<length;j++){
           if(A[i]+A[j]==k){
               printf("\n%d+%d=%d",A[i],A[j],k);
           }
       }
   } 
}

// 2. Finding Pair Of Element With Sum K In Sorted Array. TC:-O(n)
void find_pair_of_element_with_sum__k_in_sortedarray(int A[],int length,int k){
    for(int i=0,j=length-1;i<j;){
        if(A[i]+A[j]==k){
            printf("\n%d+%d=%d",A[i],A[j],k);
            i++;
            j--;
        }
        else if(A[i]+A[j]<k){
            i++;
        }
        else if(A[i]+A[j]>k){
            j--;
        }
    }
}

// 3. Find Maximum And Minimum Element In An Array. TC:-O(n)
void max_min(int A[],int length){
    int min,max;
    min=max=A[0];
    for(int i=1;i<length;i++){
        if(A[i]<min){
            min=A[i];
        }
        else if(A[i]>max){
            max=A[i];
        }
    }
    printf("\nMax=%d And Min=%d",max,min);
}

int main(){
    int arr1[]={2,5,6,10,8,3,11,7},arr2[]={1,3,4,5,6,8,9,10,12,14};
    find_pair_of_element_with_sum_k(arr1,8,10);
    cout<<"\nFind Pair In Sorted Array.";
    find_pair_of_element_with_sum__k_in_sortedarray(arr2,10,10);
    max_min(arr1,8);
    return 0;
}