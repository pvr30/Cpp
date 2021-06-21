// Find Power Of m(number).
/* 
m^n = m*m*m*m...for n times.
power(m,n)= (m*m*m*...(n-1) )* m
so...
power(m,n) = power(m,n-1)*m
*/
#include<iostream>
using namespace std;

// Recursion Method ,Timecomplexity= O(n)
int pow(int m,int n)
{
    if(n==0)
        return 1;
    else
    {
        return pow(m,n-1)*m;
    }
}

// Iteration Method.
int power(int m,int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=m;
    }
    return ans;
}
// Optimize Solution.
int power2(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power2(m*m,n/2);
    else
        return m*power2(m*m,(n-1)/2);
}
int main()
{
    printf("%d\n",pow(2,4));
    printf("%d\n",power(2,4));
    printf("%d\n",power2(2,4));
    return 0;
}