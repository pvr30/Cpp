//Polymorphism
#include<iostream>
using namespace std;
class Car
{
public:
        virtual void start()=0;
};
class Innova : public Car
{
public:
        void start() {cout<<"Innova Is Started"<<endl;}
};
class Swift : public Car
{
public:
        void start() {cout<<"Swift Is Started"<<endl;}
};
int main()
{
    Car *p,*q;
    p=new Innova;
    p->start();
    q=new Swift;
    q->start();
    return 0;
} 
