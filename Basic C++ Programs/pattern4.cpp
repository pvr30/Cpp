#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int k=n-1;k>=i;k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

