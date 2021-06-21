#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str1="Hello";
    string str2="hello";
    cout<<str2.compare(str1)<<endl;
    cout<<str1.compare(str2)<<endl;
    return 0;
}