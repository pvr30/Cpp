// PAIR is a template class in standard template library.
//Pair is not a part of container
// It is used to make a pair of two datatypes .
#include<iostream>
using namespace std;
class demo
{
private :
     int age;
     string name;
public: 
     void getdata(int a,string n)
     {
         age=a;
         name=n;
     }
     void showdata()
     {
         cout<<name<<"  "<<age<<endl;
     }
};
int main()
{
    pair<int ,string> p1;
    pair<string,string> p2;
    pair<int ,demo>  p3;
    p1=make_pair(1,"Hello");
    p2=make_pair("India","Delhi");
    cout<<p1.first<<"  "<<p1.second<<endl;
    cout<<p2.first<<"  "<<p2.second<<endl;
    demo d;
    d.getdata(19,"Vishal");
    p3=make_pair(1,d);
    cout<<p3.first<<"  ";
    d=p3.second;
    d.showdata();
    return 0;
}