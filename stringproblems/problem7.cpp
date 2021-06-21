// find username in the email address.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string email;
    cout<<"Enter Your email Id"<<endl;
    getline(cin,email);
    int i=(int)email.find('@');
    string username=email.substr(0,i);
      cout<<"The username is "<<username<<endl;
    return 0;
}