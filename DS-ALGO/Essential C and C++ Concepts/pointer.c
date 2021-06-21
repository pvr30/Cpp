// Pointer : It is Address Variable It Stores Address Of Varible.
// Pointer is used for Following Applications.
// 1. To Accesing Heap Memory.
// 2. Accesing Resources.
// 3. Parameters Passing.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d\n",a);
    printf("%d\n",p); // This gives address.
    printf("%d\n",*p);  // This is Called Derefrencing
    return 0;
}

