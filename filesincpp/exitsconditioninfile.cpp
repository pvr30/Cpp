#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{    
    string str,file_name;
    cout<<"Enter File Name"<<endl;
    getline(cin,file_name);
    ifstream r;
    r.open(file_name);
    if(r.is_open())
    {
       getline(r,str);
       cout<<str<<endl;
    }
    else
    {
      cout<<"Your File Is Not Exist"<<endl;
    }
    r.close();
    return 0;
}