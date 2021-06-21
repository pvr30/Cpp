#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="Coding";
    str.push_back('g'); // it is used to add single character in string.
    cout<<str<<endl;
    str.pop_back(); //it is used to remove last character from string.
    cout<<str<<endl; 
    return 0;
}