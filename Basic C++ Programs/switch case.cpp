#include<iostream>
using namespace std;
int main()
{
    int dayno;
    cout<<"Enter No. Of Day"<<endl;
    cin>>dayno;
    switch(dayno)
    {
        case 1:cout<<"Monday";
               break;
        case 2:cout<<"Tuesday";
               break;
        case 3:cout<<"Wednesday";
               break;
        case 4:cout<<"Thursday";
               break;
        case 5:cout<<"Friday";
               break;
        case 6:cout<<"Saturday";
               break;
        case 7:cout<<"Sunday";
               break;
        default :cout<<"Invalid Number";
               break;
    }
    return 0;
}
