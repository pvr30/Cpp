/// we can modify array's size by using pointer .
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size Of The Array"<<endl;
    cin>>size;
    int *p=new int[size];
    cout<<"Enter New Size"<<endl;
    cin>>size;
    p=new int [size];
    return 0;
}
