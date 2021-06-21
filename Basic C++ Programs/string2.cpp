///getline function
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cout<<"Enter Your Name "<<endl;
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;
    cout<<"Enter Your Name Again"<<endl;
    cin.getline(s,100);
    cout<<"Welcome "<<s<<endl;
    return 0;
}
