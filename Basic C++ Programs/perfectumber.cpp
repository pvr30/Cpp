/*Perfect Number : When The Sum Of Factors OF Any Number is Equal To
That Number Than IT Is Called As Perfect Number
For Example : 6 - factors of are 1,2,3 so 1+2+3=6 so this is a perfect number
or     8 - factors of 8 are 1,2,4, so 1+2+4!=8 so this is not a perfect number.  */
#include<iostream>
using namespace std;
int main()
{
    int num,dummy,sum=0;
    cout<<"Enter A Number"<<endl;
    cin>>num;
    dummy=num;
    cout<<"The Factors Of Given Number Are"<<endl;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum+=i;
        }
    }
    if(dummy==sum)
        cout<<"The Given Number Is A Perfect Number"<<endl;
    else
        cout<<"The Given Number Is Not A Perfect Number"<<endl;
    return 0;
}


