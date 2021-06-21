// it can be used when we have to add new string at any place of given string.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="hello";
    str.replace(1,5,"ow");
   // str.erase(); //its like clear function
    cout<<str;
    return 0;
}