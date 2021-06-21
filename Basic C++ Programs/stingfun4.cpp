///4.strcpy() function
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s1[100]="Hello";
  char s2[100];
  cout<<strcpy(s2,s1)<<endl;
 // cout<<strncpy(s2,s1,2)<<endl;
  return 0;
}

