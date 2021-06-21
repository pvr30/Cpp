#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private: 
    int roll_no;
    int m1,m2,m3;
    string name;
public:
    void get_marks(int p,int c,int m)
    {
        m1=p;
        m2=c;
        m3=m;
    }
    int Total_marks()
    {
        int t=m1+m2+m3;
        return t;
    }
    char Grade_of_student()
    {
        int t=m1+m2+m3;
        if(t>=200)
          return 'A';
        else if (t>=100)
          return 'B';
        else
          return 'C';
    }
}; 
int main()
{
    int r,m1,m2,m3;
    cout<<"Enter Students Roll No"<<endl;
    cin>>r;
    string str;
    cout<<"Enter Student Name"<<endl;
    cin>>str;
    cout<<"Enter marks Of Student In Physics,Chemistry and Maths respectivily"<<endl;
    cin>>m1>>m2>>m3;
    Student o1;
    o1.get_marks(m1,m2,m3);
    cout<<"Total Marks = "<<o1.Total_marks()<<endl;
    cout<<"Grade Of Student : "<<o1.Grade_of_student()<<endl;
    return 0;
}