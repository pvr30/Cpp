/// Print All Elements Of Array Using Pointer.
#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5};
    int *p=A;
    for(int i=1;i<=5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    return 0;
}
