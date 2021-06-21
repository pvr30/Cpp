/* 
Fibonacci Series : 0+1+1+2+3+5+8+13....n terms
fibo(n)={ 0  n=0;
        { 1 n=1;
        { fibo(n-2)+fibo(n-1)  n>1;
*/
#include<iostream>
using namespace std;
//Using Iterative Method
int fibo(int n)  // time compl=O(n)
{
    int t0=0,t1=1,sum=0;
    for(int i=2;i<=n;i++)
    {
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}

// Using Recursive Function.

int Recursivefibo(int n)  // time complexity: O(2^n)
{
    if(n<=1)
        return n;
    else
        return Recursivefibo(n-2)+Recursivefibo(n-1);
}
int main()
{
    printf("%d\n",fibo(10));
    printf("%d\n",Recursivefibo(10));
    return 0;
}