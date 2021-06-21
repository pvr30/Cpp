#include <stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
void update(int *a,int *b)
{
   // int **p=&a;    //4
    *a=*a+*b;
     cout<<*a<<endl;    //9
    *a=*a-*b;  //9=9-5=4
    *b=abs(*a-*b);
  /*  if(*a<*b)
    {*b=-(*a-*b); }// 5=4-5=-1
    else
    {*b=(*a-*b); } */
  //  cout<<*a<<endl;
    cout<<*b<<endl;
}

int main() {
    int x,y;
    cin>>x>>y;
  //  int *a=&x,*b=&y;
  // a++;
   // b++;
    update(&x,&y);
    return 0;
}
