#include<iostream>
using namespace std;
int main()
{
    int i=6,j,k;
    j=i<<1; ///<< means i*2^(no.of shift)
    k=i>>1; ///>> means i/2^(no.of shift)
    cout<<j<<" "<<k;
    return 0;
}
