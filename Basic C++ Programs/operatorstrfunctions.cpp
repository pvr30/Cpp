#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="Coding";
    str[2]='m'; ///it can use  to modify the characters in string.
    cout<<str<<endl;
    string s1="Good";
    string s2=" Morning";
    s1=s1+s2;   /// to add two strings.
    cout<<s1<<endl;
    string str1="";
    string str2="Hello";
    str1=str2;   /// to copy string
    cout<<str1<<endl;
    return 0;
}
