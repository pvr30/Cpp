#include<iostream>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    int smallelement=arr[0];
    while(k>0){
        for(int i=l+1;i<=r;i++){
            if(arr[i]<smallelement && arr[i]!=0){
                    smallelement=arr[i];
                    arr[i]=0;
            }
        }
       k--;
    }
    return smallelement;
}
int main()
{
    int a[]={7,10,4,3,20,15};
    cout<<kthSmallest(a,0,5,3)<<endl;
    return 0;
}
