// convert from upper  case to lower case
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
            if(c[i]>=97 && c[i]<=123)
             {
                 c[i]=c[i]-32;
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