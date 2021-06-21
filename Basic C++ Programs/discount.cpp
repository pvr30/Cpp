#include<iostream>
using namespace std;
int main()
{
    int billamount,firstdiscount,seconddiscount;
    cout<<"Enter Total Amount Of Bill"<<endl;
    cin>>billamount;
    firstdiscount=(billamount*10)/100;
    seconddiscount=(billamount*20)/100;
    if(billamount<100)
    {
        cout<<"You can not get Discount";
    }
    else if(billamount>=100&&billamount<1000)
    {
        cout<<"You get 10 % Discount"<<endl;
        cout<<"Your Bill Amount After Discount Is"<<endl;
        cout<<billamount-firstdiscount<<endl;
    }
    else if(billamount>=1000)
    {
        cout<<"You get 20 % Discount"<<endl;
        cout<<"Your Bill Amount After Discount Is"<<endl;
        cout<<billamount-seconddiscount<<endl;
    }
    return 0;
}
