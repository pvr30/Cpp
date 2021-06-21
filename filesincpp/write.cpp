#include<iostream>
#include<fstream>   //header file for file handling. 
#include<string.h>
using namespace std;
int main()
{
    ofstream w("demo.txt",ios::trunc);  //ostream is a class and w is object .
    string str;
    cout<<"Enter A String"<<endl;
    getline(cin,str);
    w<<str<<endl;
    w.close();
} 
// ios::trunc is used to clear all privious data in file . 
/*class demo
{
private: string name;
public:
      demo(string s)
      {
          name=s;
      }
    friend  ofstream & operator<<(ofstream &out,demo &i);
};
ofstream & operator<<(ofstream &out,demo &i)
{
    out<<i.name<<endl;
    return out;
}
int main()
{
    string name;
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    demo *list[n] ;
      for(int i=0;i<n;i++)
      {
          cout<<"Enter "<<i+1<<endl;
          cin>>name;
          list[i]=new demo(name);
      } 
      ofstream w("demo.txt");
    //  w.open("demo.txt");
      for(int i=0;i<n;i++)
      {
          w<<list[i];
      }
  //    w.close("demo.txt");
    return 0;
}*/