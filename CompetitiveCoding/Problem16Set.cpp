/// Set
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int q,val;
    cin>>q;
     for(int i=0;i<q;i++)
     {
        int choice;
        cin>>choice;
       if(choice==1)
      {
          cin>>val;
          s.insert(val);
      }
       else if(choice==2)
       {
          cin>>val;
          s.erase(val);
       }
       else if(choice==3)
      {
          cin>>val;
            if(s.count(val))
              {
                cout<<"Yes"<<endl;
              }
            else
              {
                cout<<"No"<<endl;
              }
      }
     }
    return 0;
}




