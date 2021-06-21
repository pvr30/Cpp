// convert from lower  case to upper case
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[100];
    cout<<"Enter A String"<<endl;
    cin.getline(c,100);
     for(int i=0;c[i]!='\0';i++)
        {
            if(c[i]>=65 && c[i]<=90)
             {
                 c[i]=c[i]+32;
                 cout<<c[i];
             }
             else
            {
               cout<<c[i];
             }            
        }  
      //  cout<<c;  
    return 0;
}