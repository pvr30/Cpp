//Template class using array.
#include<iostream>
using namespace std;
template<class T>
class Test
{
private:
        T *ptr;
        int size;
public:
       Test(T A[],int s);
       void show();
};
template<class T>
Test<T>::Test(T A[],int s)
{
    size=s;
    ptr=new T[s];
      for(int i=0;i<size;i++)
         ptr[i]=A[i];
}
template<class T>
void Test<T> :: show()
{
   for(int i=0;i<size;i++)
      cout<<ptr[i]<<endl;
}
int main()
{
    char A[5]={65,66,67,68,69};
    Test<char> a(A,5);
     a.show();
    int B[5]={65,66,67,68,69};
    Test<int> b(B,5);
    b.show();
    return 0;
}