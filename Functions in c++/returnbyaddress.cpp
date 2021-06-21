//Return By Address
#include<iostream>
using namespace std;
int* fun(int size)
{
    int *p=new int[size];
     for(int i=0;i<5;i++)
     {
         p[i]=i;
     }
     return p;
}
int main()
{
    int *q=fun(5);
    for(int i=0;i<5;i++)
       cout<<q[i]<<endl;
    return 0;
}