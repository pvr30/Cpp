#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
void initilization(struct Rectangle *p,int l,int b)
{
    p->length = l;
    p->breadth = b;
}
int area(struct Rectangle r1)
{
    return  r1.length*r1.breadth;
}
void changelength(struct Rectangle *p,int l)
{
    p->length = l;
}
int main()
{
    struct Rectangle r;
    initilization(&r,10,20);
    printf("The Area Is %d\n",area(r));
    changelength(&r,20);
    printf("After Changing Length the Area Is %d\n",area(r));
    return 0;
}
