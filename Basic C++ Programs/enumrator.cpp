///Enum
#include<iostream>
using namespace std;
enum day{mon,tue,wed,thr,fri,sat,sun};
int main()
{
    day d;    /* enum is used for reduced defining of variables
                the mon is take value 0 and the remaing variable
                 are 1,2,3....so on */
    d=tue;
    cout<<d;
    return 0;
}
