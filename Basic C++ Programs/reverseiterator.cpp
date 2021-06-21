#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="Coding";
    string :: reverse_iterator i;
    for(i=str.rbegin();i!=str.rend();i++)
    {
        cout<<*i;
    }
    return 0;
}
