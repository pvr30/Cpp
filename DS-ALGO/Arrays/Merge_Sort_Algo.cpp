#include<iostream>
#include<algorithm>
using namespace std;

void print_array(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void merge(int arr[],int low,int mid,int high){
    int i,j,k,temp[100];
    i=low,j=mid+1,k=low;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            k++,i++;
        }
        else if(arr[i]>arr[j]){
            temp[k]=arr[j];
            k++,j++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        k++,i++;
    }
    while(j<=high){
        temp[k]=arr[j];
        k++,j++;
    }
    for (int i = low; i <= high; i++)
    {
       arr[i]=temp[i];
    }
}
void merge_sort(int arr[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main()
{
    int arr[5]={5,4,2,1,3};
    print_array(arr,5);
    cout<<endl;
    merge_sort(arr,0,5);
    print_array(arr,5);
    return 0;
}
