#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> name;
    vector<float> price;
    vector<int> qua;
    int n;
    string str;
    float p;
    int q;
    cout<<"Enter No.  Of Items "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cout<<"Enter "<<i+1<<" Item name,Price and Quantity "<<endl; 
      cin>>str>>p>>q;
      name.push_back(str);
      price.push_back(p);
      qua.push_back(q);
    }
    cout<<"\n\n";
    for(int i=0;i<n;i++)
    {
      cout<<"Item "<<i+1<<":"<<endl;
      cout<<"Name:- "<<name[i]<<endl;
      cout<<"Price:- "<<price[i]<<endl;
      cout<<"Quantiry:- "<<qua[i]<<endl;
    }
    return 0;
}