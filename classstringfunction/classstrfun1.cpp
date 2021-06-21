#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String"<<endl;
    getline(cin,str);
    cout<<str.length()<<endl; // it shows the length of string
    cout<<str.size()<<endl;   // it also shows the length of string
    cout<<str.capacity()<<endl;   // it show the capicity of an character no.in string
    str.resize(100); //its used to modify capacity of string
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;  //it shows the maximum size.
    str.clear();   // it clear the string
    cout<<str<<endl; 
    str.empty(); // it check wether the string is emplty or not
    cout<<str<<endl;
    return 0;
}