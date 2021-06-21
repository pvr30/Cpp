//   ARRAY TEMPLATE CLASS
// Array is a linear collection of similiar elements.
#include<iostream>
#include<array>  //header file for array
using namespace std;
int main()
{
    array<int,5> A={10,20,30,40,50};  // syntax: array<datatype,sizeof array> name;
    for(int x:A)   //for each loop
    cout<<x<<endl;
     cout<<"\n\n";
           for(int i=0;i<5;i++)
                   cout<<A[i]<<endl;
    cout<<"Print Elements using itretor"<<endl;
    array<int,5> :: iterator it;
       for(it=A.begin();it!=A.end();it++)
       {
           cout<<*it<<"  ";     // itretor is a pointer .
       }
   cout<<"\n\n";          
    cout<<A.at(3)<<endl;  //at() function  
    cout<<A[3]<<endl;     //[] function
    cout<<A.front()<<endl;  // front() Function 
    cout<<A.back()<<endl;   // back()
      A.fill(100);   // fill() function we can fill same value in all element.
      cout<<"\nAfter fill() function "<<endl;
    for(int i=0;i<5;i++)
                   cout<<A[i]<<endl;
        cout<<A.size()<<endl;  //size() 
      cout<<"\nSWAP FUNCTION"<<endl;    
    array<int,3> no1={1,2,3};
    array <int,3> no2={10,20,30};
       no1.swap(no2);      //swap() we can  only same data type array and same size array.
       cout<<"no1 array"<<endl;
        for(int x:no1)  
        cout<<x<<endl;
        cout<<"\n\nno2 array"<<endl;
        for(int x:no2)  
        cout<<x<<endl;       
    return 0;
}
/*  Member Functions Of Array Template.
     at() 
     [] operator
    front()  
    back()
    fill() 
    size() 
    swap()  */