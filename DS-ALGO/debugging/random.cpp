#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    a[2]='\0'
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
  return 0;
}
