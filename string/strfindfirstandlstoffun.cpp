#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="How are you";
    cout<<str.find_first_of('o')<<endl; //it find first char in string
    cout<<str.find_last_of('o')<<endl; //it find last char in string
    return 0;
}