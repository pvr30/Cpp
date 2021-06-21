//Serialization is a process of string and retrieving state of an object.
// Class must have a default Constructer.
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Student
{
private:
     string name;
     int Roll_No;
     string Branch;
public:
     Student(){}
     Student(string n,int r,string b)
     {
         name=n;
         Roll_No=r;
         Branch=b;
     }
    friend ofstream & operator<<(ofstream &out,Student &s);    
    friend ifstream & operator>>(ifstream &in,Student &s);
    friend ostream & operator<<(ostream &out2,Student &s);    
};
ofstream & operator<<(ofstream &out,Student &s)
{
    out<<s.name<<endl;
    out<<s.Roll_No<<endl;
    out<<s.Branch<<endl;
    return out;
}
ifstream & operator>>(ifstream &in,Student &s)
{
    in>>s.name;
    in>>s.Roll_No;
    in>>s.Branch;
    return in;
}
ostream & operator<<(ostream &out2,Student &s)
{
    out2<<"Name:- "<<s.name<<endl;
    out2<<"Roll No.:-"<<s.Roll_No<<endl;
    out2<<"Branch:-"<<s.Branch<<endl;
    return out2;
}
int main()
{
    ofstream o1;
    o1.open("Test.txt");
    Student s1("Vishal",53,"ECE");
    o1<<s1;
    o1.close();
    Student s2;
    ifstream i1;
    i1.open("Test.txt");
    i1>>s2;
    cout<<s2;  
    return 0;
}