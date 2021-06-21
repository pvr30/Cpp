#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Item
{
private:
      string name;
      float  Price;
      int  qut;
public:
      Item(){}
      Item(string n,float p,int q)
      {
          name=n;
          Price=p;
          qut=q;
      }
    friend ofstream & operator<<(ofstream &out,Item &i);
    friend ifstream & operator>>(ifstream &in,Item &i);
    friend ostream & operator<<(ostream &out,Item &i);
};
ofstream & operator<<(ofstream &out,Item &i)
{
    out<<i.name<<endl;
    out<<i.Price<<endl;
    out<<i.qut<<endl;
    return out;
}
ifstream & operator>>(ifstream &in,Item &i)
{
    in>>i.name;
    in>>i.Price;
    in>>i.qut;
    return in;
}
ostream & operator<<(ostream &o,Item &i)
{
    o<<"Name:- "<<i.name<<endl;
    o<<"Price:- "<<i.Price<<endl;
    o<<"Quantity:- "<<i.qut<<endl;
    return o;
}
int main()
{
    string str;
    float p;
    int q;
    int n;
    cout<<"Enter Number Of Items"<<endl;
    cin>>n;
    Item *list[n];
    for(int i=1 ;i<=n;i++)
    {
        cout<<"Enter "<<i<<" Item Name,Price And Quantity"<<endl;
        cin>>str;
        cin>>p;
        cin>>q;
        list[i]=new Item(str,p,q);
    }
     ofstream w;
     w.open("item.txt");
   for(int i=1;i<=n;i++)
   {
      w<<*list[i];
   }
    w.close();     
    ifstream r;
    r.open("item.txt");
    Item item;
    for(int i=1;i<=n;i++)
    {
        r>>item;
        cout<<"Item No. "<<i<<endl;
        cout<<item<<endl;
    }
     r.close();
    return 0;
}