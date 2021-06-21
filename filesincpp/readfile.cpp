#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream r;//("Test.txt"); 
    r.open("test.txt");//ifstream is a class and r is object
    string str;
    getline(r,str);
    cout<<str<<endl;
    r.close();
    return 0;
}