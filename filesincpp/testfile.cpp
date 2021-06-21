#include<iostream>
#include<fstream>   //header file for file handling. 
#include<string.h>
using namespace std;
int main()
{
    ofstream w("Test.txt");  //ostream is a class and w is object .
    string str;
    cout<<"Enter A String"<<endl;
    getline(cin,str);
    w<<str<<endl;
    w.close();
}