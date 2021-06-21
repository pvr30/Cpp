///get function
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter Name"<<endl;
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    cin.ignore();
    cout<<"Enter Name Again "<<endl;
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;
    return 0;
}
