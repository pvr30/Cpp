//List class supports a bidirectional , linear list.
//Vector supports  ramdom access but a list can be accessed sequentially only.
//List can be accessed front to back or back to front.
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<char> l1={'z','s','a','c'}; 
    for(auto x:l1)
    { cout<<x<<" "; }
    cout<<"\n";
    cout<<"After Sorting"<<endl;
    l1.sort();    //sort()
    list<char> :: iterator itr;
    for(itr=l1.begin();itr!=l1.end();itr++)
    {cout<<*itr<<" ";}
    cout<<"\nThe size is "<<l1.size()<<endl;   //size()
    cout<<"After pushing "<<endl;
    l1.push_back('q');       //push_back()
    l1.push_front('b');      //push_front()
    for(auto x:l1)
    {cout<<x<<" "; }
    cout<<"\nAfter poping "<<endl;
    l1.pop_back();        //pop_back()
    l1.pop_front();       //pop_front()
    for(auto x:l1)
    {cout<<x<<" "; }
    cout<<"\nAfter Reversing"<<endl;
     l1.reverse();         //reverse();
    for(auto x:l1)
    {cout<<x<<" "; }
    cout<<"\nAfter Removing 'a' from list"<<endl;
    l1.remove('a');    //remove();
    for(auto x:l1)
    {cout<<x<<" "; }    
    cout<<"\nAfter Clear The list"<<endl;
    l1.clear();       //clear()
    for(auto x:l1)
    {cout<<x<<" "; } 
    return 0;
}

/*   Functions used in list.
     sort() 
     size()
     push_back()
     push_front()
     pop_back()
     pop_front() 
     reverse()
     remove()
     clear()     */