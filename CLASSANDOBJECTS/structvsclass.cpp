/* structer and class are same the only difference between them is 
 class's data is bydefualt private and struct's data is bydefualt public  */
#include<iostream>
using namespace std;
struct demo 
{
    int a;
    int b;
    void display()   
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }    
};
int main()
{
    demo r;
    r.a=10;
    r.b=20;
    r.display();
    return 0;
}