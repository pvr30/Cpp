// tuple is just like pair but with tuple we can pair multiple datatypes together.
#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<int,string,int> t1;
    t1=make_tuple(1,"Vishal",19);
    cout<<get<0>(t1)<<"  ";
    cout<<get<1>(t1)<<"  ";
    cout<<get<2>(t1)<<"  ";
    return 0;
}