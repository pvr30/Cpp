#include<iostream>
using namespace std;
template<class T>
class Arithmetic{
private:
    T a;
    T b;
public:
    Arithmetic(T a,T b);
    T sum();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T>::sum()
{
    return a+b;
}

template<class T>
T Arithmetic<T>::sub()
{
    return a-b;
}
int main()
{
    Arithmetic<int> N(20,10);
    cout<<N.sum()<<endl;
    cout<<N.sub()<<endl;
    Arithmetic<float> F(1.5,1.2);
    cout<<F.sum()<<endl;
    return 0;
}
