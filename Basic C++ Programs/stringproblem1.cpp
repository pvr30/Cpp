#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int len=0;
    cout<<"Enter a String"<<endl;
    getline(cin,str);
     for(int i=0;str[i]!='\0';i++)
     {
         len++;
     }
     cout<<len<<endl;
    return 0;
}
