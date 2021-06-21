#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May I Know Your Name"<<endl;
    getline(cin,name);   ///getline is used for get string after space.
    cout<<"Hello "<<name<<endl;
    return 0;
}
