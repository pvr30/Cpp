/*
“malloc” or “memory allocation” method in C is used to dynamically allocate
a single large block of memory with the specified size.
It returns a pointer of type void which can be cast into a pointer of any form.
It initializes each block with default garbage value
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter No. Of Elements\n");
    scanf("%d",&n);
    int *p;
    p = (int *)malloc(5*sizeof(int));
    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    return 0;
}
