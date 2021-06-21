// Increasing Size Of Array

#include<iostream>
using namespace std;
int main()
{
    int *p;
    p = new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=i+1;
    }
    printf("Array P\n");
    for(int i=0;i<5;i++)
    {
       printf("%d ",p[i]);
    }
    // Now We can Not Increased Array's size directly..so we have to use another array

    int *q;
    q=new int[10];
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];  // we just copy p's array elements into q's array 
    } 
    delete p;
    printf("\nArray Q\n");
    for(int i=0;i<10;i++)
    {
       printf("%d ",q[i]);    //1 2 3 4 5 0 0 0 0 0
    }
    return 0;
}