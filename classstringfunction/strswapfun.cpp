#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str1="Programming";
    string str2="Language";
    cout<<str1<<" "<<str2<<endl;
    str1.swap(str2); //it is used to swap to strings
    cout<<str1<<" "<<str2<<endl;
    return 0;
}