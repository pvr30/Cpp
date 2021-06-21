//this will use for copy one string into another string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str1="Hello";
    char s1[10],s2[10];
    str1.copy(s1,str1.length());
    str1.copy(s2,3);
    s2[3]='\0';
    cout<<s1<<endl; 
    cout<<s2<<endl;  
    return 0;
}