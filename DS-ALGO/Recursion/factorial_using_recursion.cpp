/*
Factorial Of A Numbers.
1*2*3*4*....(n-1)*n
so...

fact(n) = { 1  x=0;
         { fact(n-1)*n x>0;

*/

#include<iostream>
using namespace std;
int fact(int n) // time complexity=O(n)
{ 
    if(n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int main()
{
    printf("The Factorial Of Given Number Is %d",fact(5));
    return 0;
}
