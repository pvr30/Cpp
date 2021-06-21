#include<iostream>
using namespace std;
typedef string name;
typedef int marks;    /*typedef is uded to define same type of data which
                         can be used esily anywhere in program */
int main()
{
    name str;
    marks m1,m2,m3;
    cout<<"Enter Name Of A Student"<<endl;
    cin>>str;
    cout<<"Enter Marks Of A Student"<<endl;
    cin>>m1>>m2>>m3;
    cout<<str<<endl;
    cout<<m1<<" "<<m2<<" "<<m3<<endl;
    return 0;
}
