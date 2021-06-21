#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string email;
    cout<<"Enter Your Email Id"<<endl;
    getline(cin,email);
          for(int i=0;email[i]!='\0';i++)
           {
               if(email[i]>=65 && email[i]<=90 && email[i]>=97 && email[i]<=123
               && email[i]=='_' && email[i]=='.' && email[i]<='9' && email[i]<='0')
                  cout<<"You can sign in"<<endl;
                  else
                 cout<<"Please entered valid username";                  
           }
    return 0;
}