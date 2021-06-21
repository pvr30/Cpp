///10.strtol() and strtof()
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     char s1[10]="235";
     char s2[10]="50.60";
     long int  x=strtol(s1,NULL,10);/*this will convert from string
                                    to long int here 10 is type
                                    of data and here 10 =desimal */
     float y=strtof(s2,NULL);       /*this will convert from string
                                    to float */
    cout<<x+5<<" "<<y<<endl;
    return 0;
}
