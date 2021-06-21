#include<iostream>
using namespace std;

// 1. Finding Duplicates In A Sorted Array.
void find_duplicates_in_sorted_array(int A[],int length){
    cout<<"Duplicates Are....\n";
    int lastDuplicate=0,temp[length],p=0;
    for(int i=0;i<length;i++){
        if(A[i]==A[i+1] && A[i]!=lastDuplicate){
            printf("%d ",A[i]);
            lastDuplicate=A[i];
        }
        else{
         temp[p]=A[i];
         p++;
        }
    }
    for(int i=0;i<p;i++){cout<<temp[i]<<" ";}
}

// 2. Finding Duplicates And Count The No. Of Dupliactes.
void count_duplicates(int A[],int length){
    int j=0;
    for(int i=0;i<length;i++){
        if(A[i]==A[i+1]){
            j=i+1;
            while(A[j]==A[i]) {j++;}
            printf("\n%d Is Appears %d Times",A[i],j-i);
            i=j-1;
        }       
    }
}

// 3. Finding Duplicates Using Hashing. TC:-O(n)
void find_duplicates_using_hashing(int A[],int length){
    int max_size=A[length-1];
    int H[max_size+1]={0};
    for(int i=0;i<length;i++){
        H[A[i]]++;
    }
    for(int i=0;i<=max_size;i++){
        if(H[i]>1){
            printf("\n%d Is Appears %d Times",i,H[i]);
        }
    }
}

// 4. Finding Duplicates In UnSorted Array. TC:-O(n^2)
void find_duplicates_in_unsorted_array(int A[],int length){
    int count;
    for(int i=0;i<length;i++){
        count=1;
        if(A[i]!=-1){
            for(int j=i+1;j<length;j++){
                if(A[i]==A[j]){
                    count++;
                    A[j]=-1;
                }
            }
            if(count>1){printf("\n%d Appears %d Times",A[i],count);}
        }
    }
}

// 5. find duplicates in Unsorted array using Hashing. TC:-O(n)
void find_duplicates_Using_hashing_in_unsorted_array(int A[],int length,int max_num){
    int H[max_num+1]={0};
    for(int i=0;i<length;i++){
        H[A[i]]++;
    }
    for(int i=0;i<=max_num;i++){
        if(H[i]>1){
            printf("\n%d Appears %d Times",i,H[i]);
        }
    }
}

int main()
{
    int arr1[]={2,3,4,4,5,6,6,6,7,8},arr2[]={5,2,4,5,7,2,3,6,2},arr3[]={5,2,4,5,7,2,3,6,2};
    find_duplicates_in_sorted_array(arr1,10);
    count_duplicates(arr1,10);
    cout<<"\nFind Duplicates Using Hashing";
    find_duplicates_using_hashing(arr1,10);
    cout<<"\nFind Duplicates In UnSorted Array";
    find_duplicates_in_unsorted_array(arr2,9);
    cout<<"\nFind Duplicates In UnSorted Array Using Hashing";
    find_duplicates_Using_hashing_in_unsorted_array(arr3,9,7);
    return 0;
}