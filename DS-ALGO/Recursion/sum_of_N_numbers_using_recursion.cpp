/*
Sum Of N Natural Numbers.
1+2+3+4+....(n-1)+n
so...

sum(n) = { 0  x=0;
         { sum(n-1)+n x>0;

Equation For It: n(n+1)/2
*/

#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int main()
{
    cout<<"The Sum Is "<<sum(5)<<endl;
    return 0;
}
