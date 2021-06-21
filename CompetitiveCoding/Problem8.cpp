#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    string t1=a,t2=b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a.append(b)<<endl;
    for(int i=0,j=0;a[i],b[j]!='\0';i++,j++)
    {
        a[0]=b[0];
        cout<<a[i];
    }
    return 0;
}
