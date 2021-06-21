#include<iostream>
using namespace std;

// 1. Finding Single Missing Element In A First N Natural Number Sorted Array. Time Complexity:-O(n)
void find_single_missing_element_in_a_sorted_array(int A[],int length){
    int sum=0,s;
    int n=A[length-1];
    for(int i=0;i<length;i++){
        sum+=A[i];
    }
   // cout<<sum<<endl;
    s=n*(n+1)/2;
   // cout<<s<<endl;
    printf("The Missing Element Is %d",s-sum);
}

// 2.Finding Missing Element In A UnSorted Array. Time Comlexity:-O(n)
void find_single_missing_element_in_a_unsorted_array(int A[],int length){
    int diff=A[0]-0;
    for(int i=0;i<length;i++){
        if(A[i]-i!=diff){
            printf("\nThe Missing Element Is %d",i+diff);
            break;
        }
    }   
}

// 3.Finding More Than One Elements In An Sorted Array . TC-O(n)
void find_more_than_one_missing_elements(int A[],int length){
    int diff=A[0]-0;
    cout<<"\nThe Missing Elements Are..."<<endl;
    for(int i=0;i<length;i++){
        if(A[i]-i!=diff){
            while(diff<A[i]-i){
                printf("%d ",i+diff);
                diff++;
            }
        }       
    }
}

// 4. Find More Than One Elements In An UnSorted Array Using Hashing. TC:-O(n)  (😂😎😍😍) 
void find_more_than_one_missing_elements_in_a_unsorted_array(int A[],int length){
    printf("\nThe Missing Elements Are\n");
    int H[12]={0};   
    for(int i=0;i<length;i++){
        H[A[i]]++;
    }

    for(int i=1;i<=12;i++){
        if(H[i]==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int arr1[]={1,2,3,4,6,7},arr2[]={4,5,6,7,9,10,12,11},arr3[]={4,5,7,8,10,12,14,15,16};
    int arr4[]={3,6,7,2,4,9,11};
    find_single_missing_element_in_a_sorted_array(arr1,6);
    find_single_missing_element_in_a_unsorted_array(arr2,8);
    find_more_than_one_missing_elements(arr3,9);
    find_more_than_one_missing_elements_in_a_unsorted_array(arr4,7);
    return 0;
}