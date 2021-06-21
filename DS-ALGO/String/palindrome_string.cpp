#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,rev="";
    cout<<"Enter A Line"<<endl;
    getline(cin,str);
    int len=str.length();
    rev.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
        {
            rev[i]=str[j];
        }
    if(str.compare(rev)==0)
        cout<<"The String is palindrome"<<endl;
    else
        cout<<"The String is not palindrome"<<endl;
    return 0;
}