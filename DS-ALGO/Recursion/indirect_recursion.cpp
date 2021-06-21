/// Indirect Recursion: If there more than one function and each function is calling another function than its called...
/// Like A->Calling->B->Calling->C->Calling Again->A .
#include<iostream>
using namespace std;
void fun_B(int n);
void fun_A(int n)
{
    if(n>0){
        cout<<n<<" ";
        fun_B(n-1);
    }
}
void fun_B(int n)
{
    if(n>0){
        cout<<n<<" ";
        fun_A(n/2);
    }
}
int main()
{
    fun_A(20);
    return 0;
}
