#include<iostream>
using namespace std;
class Array{
public:
    int A[10];
    int size;
    int length;

    void display(class Array arr){
         printf("Displaying The Array\n");
                for(int i=0;i<length;i++)
                    printf("%d ",A[i]);
                printf("\n");
    }

    // 1. Merging Two Sorted Arrays.
    void Merge(class Array *arr1,class Array *arr2)  // Time Complexity- O(m+n)
    {
        class Array *arr3;
        arr3=new Array[length]; //-> Heap Memory allocation in C++.
       // arr3=(class Array*)malloc(sizeof(class Array)); //->Heap Memory allocation in C.
        int i,j,k;
        i=j=k=0;
        while(i<arr1->length && j<arr2->length){
            if(arr1->A[i]<arr2->A[j]){
                arr3->A[k++]=arr1->A[i++];
                }
            else{
                arr3->A[k++]=arr2->A[j++];
            }
        }
            for(;i<arr1->length;i++) {arr3->A[k++]=arr1->A[i++];}
            for(;j<arr2->length;j++) {arr3->A[k++]=arr2->A[j++];}
        arr3->length=arr1->length+arr2->length;
        for(int i=0;i<arr3->length-1;i++){
            cout<<arr3->A[i]<<" ";
        }
    }    
};
int main()
{
    Array arr1={{3,4,8,9,11},10,5};
    Array arr2={{1,5,6,10,12},10,5};
    Array arr3;
    arr3.Merge(&arr1,&arr2); 
    return 0;
}