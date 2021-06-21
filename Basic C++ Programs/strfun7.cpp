///strchr() it is also like a stsstr() function
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100]="Programming";
    cout<<strrchr(s,'g')<<endl;
    /*char s1[100];
    char s;
    cout<<"Enter Name"<<endl;
    cin.getline(s1,100);
    cout<<"Enter char"<<endl;
    cin>>s;
    cout<<strrchr(s1,s)<<endl;*/

  return 0;
}
