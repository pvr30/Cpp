#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str="coding";
    string :: iterator i;
    for(i=str.begin();i!=str.end();i++)
    {
        cout<<*i;
    }
    cout<<endl;
    return 0;
}
