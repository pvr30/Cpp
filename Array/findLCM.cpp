///Find LCM of Two Numbers .LCM =Least Common Multiple
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,lcm;
    cout<<"Enter Two Numbers"<<endl;
    cin>>a>>b;
    if(a>b)
        lcm=a;
    else
        lcm=b;
        while(1)
        {
            if(lcm%a==0&&lcm%b==0)
            {
                cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
                break;
            }
            else
            {
                lcm++;
            }
        }
    return 0;
}
