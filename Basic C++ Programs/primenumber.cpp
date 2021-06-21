/// Prime Number : Which Can be Divided By Only 1 And Itself.
#include<iostream>
using namespace std;
int main()
{
    int num,counter=0;
    cout<<"Enter A Number"<<endl;
    cin>>num;
     for(int i=1;i<=num;i++)
     {
         if(num%i==0)
         {
             counter++;
         }
     }
     if(counter==2)
        cout<<"The Given Number Is Prime Number"<<endl;
     else
        cout<<"The Given Number Not A Prime Number"<<endl;
    return 0;
}
