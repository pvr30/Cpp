// Taylor Series 
/* 
e(x,n)=1+(x^1)/1!+(x^2)/2!+(x^3)/3!+....+(x^n)/n!
*/
#include<iostream>
using namespace std;
double taylor(int x,int n)  //time complexicity-O(n)
{
    static double p=1,f=1;
    double result;
    if(n==0)
        return 1;
    else
    {
        result=taylor(x,n-1);
        p=p*x;
        f=f*n;
        return result+p/f;
    }   
}

/*
Method-2 Horner's Rule 
e(x,n)=1+(x^1)/1!+(x^2)/2!+(x^3)/3!+....+(x^n)/n!
e(x,n)=1+x/1[1+x/2[1+x/3[1+x/4.....]]]
*/
double taylor2(int x,int n)
{
    static double result=1;
    if(n==0)
        return result;
    else
    {
       result=1+double(x)/double(n)*result;
       return taylor2(x,n-1);
    }
    
}
// Using Iteration Method
double taylor3(int x,int n)
{
    double result=1;
    while(n>0)
    {
       result = 1+double(x)/double(n)*result;
       n--;
    }
    return result;
}
int main()
{
    printf("%lf\n",taylor(2,5));
    printf("%lf\n",taylor2(2,5));
    printf("%lf\n",taylor3(2,5));
    return 0;
}   