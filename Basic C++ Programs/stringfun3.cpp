/// 3 strncat() function
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s1[100],s2[100];
  cout<<"Enter First Name"<<endl;
  cin.getline(s1,100);
  cout<<"Enter Second Name"<<endl;
  cin.getline(s2,100);
  cout<<"Your Full Name is "<<strncat(s1,s2,1)<<endl;
  return 0;
}
