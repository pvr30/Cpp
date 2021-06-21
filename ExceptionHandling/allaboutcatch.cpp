#include<iostream>
using namespace std;
class MyException1
{
public:
      MyException1() {cout<<"MyException 1 Constructer"<<endl;}
};
class MyException2 : public MyException1
{
public:
      MyException2() {cout<<"MyException 2 Constructer"<<endl;}
};
int main()
{
    try
    {
       throw MyException2();
    }
    catch(MyException2)
    {
       cout<<"1"<<endl;
    }
  /*   try
    {
       throw MyException2();
    } */
    catch(MyException2)
    {
       cout<<"2"<<endl;
    }
    try 
    {
        throw char{'A'};
    }
    catch(int e)  {cout<<"Integer Value"<<endl;}
    catch(string e) {cout<<"String "<<endl;}
    catch(...) {cout<<"ALL Catch"<<endl;}
    return 0;
}