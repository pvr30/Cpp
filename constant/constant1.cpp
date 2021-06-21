#include<iostream>
using namespace std;
int main()
{
//    const int x=10; //->1 use
    // int const x=10;
  ///x++;
  //cout<<x;
    int x=10,y=20;
  // const int *ptr=&x; //-> 2 use
   // ptr=&y;
    //int * const ptr=&x;  // -> 3 use
    // ptr=&y;
     //++ *ptr;
   const int *const ptr=&x;  //-> 4 use
   // ptr=&y;
    //++ *ptr;
    cout<<x<<"  "<<*ptr<<endl;
    return 0;
}