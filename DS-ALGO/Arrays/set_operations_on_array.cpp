#include<iostream>
using namespace std;
class Set_Operation{
public:
    int A[10];
    int size;
    int length;

    //1.Union of two sets , time comp.- O(n)
    void Union(class Set_Operation *arr1,class Set_Operation *arr2){
        Set_Operation *arr3;
        arr3=new Set_Operation[arr1->length]; //-> Heap Memory allocation in C++.
       // arr3=(class Array*)malloc(sizeof(class Array)); //->Heap Memory allocation in C.
        int i,j,k;
        i=j=k=0;
        while(i<arr1->length && j<arr2->length){
            if(arr1->A[i]<arr2->A[j]){
                arr3->A[k++]=arr1->A[i++];
                }
            else if(arr1->A[i]>arr2->A[j]){
                arr3->A[k++]=arr2->A[j++];
            }
            else if(arr1->A[i]==arr2->A[j]){
                arr3->A[k++]=arr1->A[i++];
                j++;
            }
        }
            for(;i<arr1->length;i++) {arr3->A[k++]=arr1->A[i];}
            for(;j<arr2->length;j++) {arr3->A[k++]=arr2->A[j];}
            arr3->length=k;
            arr3->size=10;
         for(int i=0;i<=arr3->length-1;i++){
                cout<<arr3->A[i]<<" ";
            } 
    }

    // 2. InterSection Of Two Set. - O(n)
     void InterSection(class Set_Operation *arr1,class Set_Operation *arr2){
        Set_Operation *arr3;
        arr3=new Set_Operation[arr1->length]; 
        int i,j,k;
        i=j=k=0;
        while(i<arr1->length && j<arr2->length){
            if(arr1->A[i]<arr2->A[j]){
                i++;
                }
            else if(arr1->A[i]>arr2->A[j]){
                j++;
            }
            else if(arr1->A[i]==arr2->A[j]){
                arr3->A[k++]=arr1->A[i++];
                j++;
            }
        }
            arr3->length=k;
            arr3->size=10;
         for(int i=0;i<=arr3->length-1;i++){
                cout<<arr3->A[i]<<" ";
            } 
    }

    // 3.Difference Of Two Sets. Time Comp- O(n)
    void Difference(class Set_Operation *arr1,class Set_Operation *arr2){
        Set_Operation *arr3;
        arr3=new Set_Operation[arr1->length]; 
        int i,j,k;
        i=j=k=0;
        while(i<arr1->length && j<arr2->length){
            if(arr1->A[i]<arr2->A[j]){
                arr3->A[k++]=arr1->A[i++];
                }
            else if(arr1->A[i]>arr2->A[j]){
                j++;
            }
            else if(arr1->A[i]==arr2->A[j]){
                i++,j++;
            }
        }
            for(;i<arr1->length;i++) {arr3->A[k++]=arr1->A[i];}
            arr3->length=k;
            arr3->size=10;
         for(int i=0;i<=arr3->length-1;i++){
                cout<<arr3->A[i]<<" ";
            } 
    }
};
int main(){
    Set_Operation p={{2,9,21,28,35},10,5};            
    Set_Operation q={{2,3,9,18,28},10,5};            
    Set_Operation s;
    cout<<"Union Of Two Set"<<endl;
    s.Union(&p,&q);
    cout<<"\nInterSection Of Two Set\n";
    s.InterSection(&p,&q);
    cout<<"\nDifference Of Two Set\n";
    s.Difference(&p,&q);
    return 0;   
}