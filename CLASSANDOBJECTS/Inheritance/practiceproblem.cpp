#include<iostream>
//#include<string.h>
using namespace std;
class Employe
{
private:
     string name;
     float salary;
     float wages;
public:
     void setsalary(float x)  
     {salary=x;}
     float getsalary()
     {return salary;}
     void setwages(float x)
     {wages=x;}
     float getwages()
     {return wages;}  
};
class Fulltime: public Employe
{
public:
      void Full_salary(string name,float salary)
      {
          cout<<"The salary of "<<name<<" is "<<salary<<endl;
      }
};
class Parttime: public Employe
{
public:
       void Part_salary(string name , float wages)
       {
          cout<<"Daily Wages of "<<name<<" is "<<wages<<endl;
       }
};
int main()
{
    string str1,str2;
    float s,w;
    cout<<"Enter Name Of Employe Who Doing Full Time Job"<<endl;
    cin>>str1;
    cout<<"Enter Salary"<<endl;
    cin>>s;
    cout<<"Enter Name Of Employe Who Doing Part Time Job"<<endl;
    cin>>str2;
    cout<<"Enter Wages"<<endl;
    cin>>w;
    Employe e1;
    e1.setsalary(s);
    e1.setwages(w);
    Fulltime f;
    f.Full_salary(str1,s);
    Parttime p;
    p.Part_salary(str2,w);
    return 0;
}