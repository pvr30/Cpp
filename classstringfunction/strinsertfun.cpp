/*this is used to add string with previous string but we have to mention the 
no. of characters */
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="Hello! How are you";
    str.insert(18," Vishal");
    cout<<str<<endl;
    return 0;
}