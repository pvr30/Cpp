///1.strlen() function
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter A String"<<endl;
    cin.getline(s,100);
    cout<<"Length="<<strlen(s)<<endl;
    return 0;
}
