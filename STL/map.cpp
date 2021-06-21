// Map are used to replicate associative arrays.
/*Maps contain sorted keyvalue pair ,in which each key is unique and cannot be changed 
and it can be inserted or deleted but cannot be altered. */
// Map always arrange its keys in sorted order.
//In case the keys are of string type,they are sorted in dictionary order.
#include<iostream>
#include<map>
using namespace std;
int main()
{
  /*  map<int,string> m;   
    m[1]="Vishal";
    m[2]="Sahil";     // we can also define like this
    m[3]="Harsh"; */
    map<int,string> m{{10,"Vishal"},{2,"Sahil"},{32,"Harsh"}};
    map<int,string> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
    { cout<<it->first<<"  "<<it->second<<endl;}
    cout<<"\nAfter Inserting"<<endl;
    m.insert(pair<int,string> (4,"Sanjay"));  //insert()
    for(it=m.begin();it!=m.end();it++)
    { cout<<it->first<<"  "<<it->second<<endl;}
    cout<<m.at(2)<<endl;   // at() or []
    cout<<"The size is "<<m.size()<<endl;
    m.clear();   //clear()
     for(it=m.begin();it!=m.end();it++)
    { cout<<it->first<<"  "<<it->second<<endl;}
    return 0;
}
/* Function used for map class  
   at() or [] 
   insert()
   size()
   clear() */