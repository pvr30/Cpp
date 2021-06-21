#include<iostream>
using namespace std;
int main()
{
    int A[]={2,3,4,5};
    int *p=A;
    cout<<*p<<"  "<<p<<endl;
    p++;
    cout<<*p<<"  "<<p<<endl;
    p--;
    cout<<*p<<"  "<<p<<endl;
    p+=2; ///or p=p+2
    cout<<*p<<"  "<<p<<endl;
    p-=2;  ///or p=p-2
    cout<<*p<<"  "<<p<<endl;
    return 0;
}
