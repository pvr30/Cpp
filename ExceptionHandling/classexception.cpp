#include<iostream>
using namespace std;
class Test
{
public:
    Test(){cout<<"Constructer"<<endl;}
};
int main()
{
    try
    {
        Test t1;
        throw Test();  /*When a exception is thrown ,all objects created inside the enclosing
                          try block are destructed before the control is 
                          transferred to catch block   */
    }
    catch(Test)
    {
       cout<<"Catch Exception "<<endl;
    }
    
    return 0;
}