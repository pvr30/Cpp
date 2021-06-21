#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};

int main()
{
    struct Rectangle r1;
    r1.length = 10;
    r1.breadth = 20;
    printf("%d\n",r1.length*r1.breadth);

    // Array Structure.
    struct Rectangle r[10];
    for (int i=1;i<10;i++)
    {
        int l=r[i].length = i;
        int b=r[i].breadth = i;
        printf("%d ",l*b);
    }
    return 0;
}
