//Static Member Of Class (Static Function).
#include<iostream>
using namespace std;
class demo
{
public:
       int a;
    static int count;
    demo()
    {
        a=10;
        count++;
   //     cout<<a<<" "<<count<<endl;
    }
    static int get()
    {
        return count;   /*this is static function . we can not access other
                          members of class in static function .
                          we can only access static variable.*/
    }
};
int demo::count=0;
int main()
{
    demo d1,d2,d3,d4;
    cout<<d1.get()<<endl;
    d1.count=20;
    cout<<d2.get()<<endl;
    cout<<d3.get()<<endl;
    cout<<d4.get()<<endl;
    cout<<demo::get()<<endl; //we can also access without object
    return 0;
}