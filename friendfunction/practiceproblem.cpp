#include<iostream>
using namespace std;
class Admisson
{
public:
     int rollno;
     string name;
     static int admisson_no;
      Admisson(string n)
      {
          admisson_no++;
          rollno=admisson_no;
          name=n;
      }
      void display()
      {
          cout<<"Roll No. Of "<<name<<" is "<<rollno<<endl;
      }
};
int Admisson :: admisson_no=0;
int main()
{
    Admisson a1("Vishal");
    Admisson a2("Harsh");
    Admisson a3("Sahil");
    Admisson a4("Sanjay");
    a1.display();
    a2.display();
    a3.display();
    a4.display();
    return 0;
}