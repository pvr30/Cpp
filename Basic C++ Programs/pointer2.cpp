#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    delete[]p;
     p=new int [40];
    return 0;
}
