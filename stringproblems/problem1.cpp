#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  //  string str;
   char c[50];
    int len=0;
    cout<<"Enter A string"<<endl;
    //cin>>c;
    cin.getline(c,50);
     for(int i=0;c[i]!='\0';i++)
     {
         len++;
     }
     cout<<"The Length Of The String Is "<<len<<endl;
    return 0;
}