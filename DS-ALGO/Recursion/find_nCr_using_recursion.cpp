/*
Combinational Formula 
nCr=n!/r!(n-r)!
*/
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else{
        return fact(n-1)*n;
    }
}
int nCr(int n,int r)  // time comlexity=O(n)
{
    int num,den;
    num=fact(n);
    den=fact(r)*fact(n-r);
    return num/den;
}

// Using Recursive Function.
int RecursiveNCR(int n,int r)
{
    if(r==0 || n==r)
        return 1;
    else{
        return RecursiveNCR(n-1,r-1)+RecursiveNCR(n-1,r);
    }
}
int main()
{
    printf("%d\n",nCr(5,2));
    printf("%d\n",RecursiveNCR(5,2));
    return 0;
}