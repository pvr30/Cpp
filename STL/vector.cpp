x//The most general purpose container is the vector.
//It supports Dynamic Array.
//Array size is fixed ,no flexibility to grow during execution.
//vector can provide memory  flexibility.
#include<iostream>
#include<vector>
using namespace std;
int  main()
{
    vector<int> v1={1,2,3,4};
    vector<char> v2(3,'a');
    vector<string> v3(2,"Vishal");
    for(auto x:v1)
    {
      cout<<x<<" ";
    }
    cout<<"\n";
    for(auto x:v2)
    {
    cout<<x<<" ";
    }
    cout<<"\n";
    for(auto x:v3)
    {
    cout<<x<<" ";
    }
    cout<<"\n";
    cout<<v1.size()<<endl;    //size()
    cout<<v1.capacity()<<endl;   //capacity()
    v1.push_back(5);      //push_back()
    cout<<v1.capacity()<<endl;   
    cout<<v1.at(3)<<endl;     //at() or[]
    cout<<v1.front()<<endl;     //front()
    cout<<v1.back()<<endl;      //back()
    cout<<"After Inserting"<<endl;
     vector<int> :: iterator it;
      v1.insert(v1.begin()+1,10);        //insert()
    for( it=v1.begin();it!=v1.end();it++)
    { cout<<*it<<"  ";  }
     cout<<"\n";
    v1.clear();
    cout<<v1.size()<<endl;  
    return 0;
}
/* Function used for vector
   size()
   capacity()
   push_back()
   pop_back()
   at() or []
   front()
   back()
   insert()
   clear()     */