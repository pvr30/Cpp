///strcmp()  it can compare two strings
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char s1[10]="Hello";  ///it return only 1,0,-1
  char s2[10]="hello";
  cout<<strcmp(s1,s2)<<endl;
  return 0;
}
