//upper case and lower case using class string
#include<iostream>
#include<string.h>
using namespace std;
int main()
{ 
    string str;
    cout<<"Enter A String "<<endl;
    getline(cin,str);
     for(int i=0;str[i]!='\0';i++)
     {
         if(str[i]>=65 && str[i]<=90)
           str[i]+=32;
     }
    cout<<str<<endl;
    return 0;
}