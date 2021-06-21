//it subtract the char from string using the index number.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="Programming";
    cout<<str.substr(3)<<endl;
    cout<<str.substr(3,4)<<endl;
    return 0;
}