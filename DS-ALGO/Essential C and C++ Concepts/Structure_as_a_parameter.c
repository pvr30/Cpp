#include<stdio.h>

///Call By Value
struct Rectangle{
    int length;
    int breadth;
};
int area(struct Rectangle r1)
{
    r1.length++;
    return r1.length*r1.breadth;
}
int main()
{
    struct Rectangle r={10,20};
    int a;
    a=area(r);
    printf("The Area Is %d",a);
    return 0;
}

/// Call By Address.
/*
struct Rectangle{
    int length;
    int breadth;
};
int area(struct Rectangle *r1)
{
    r1->length++;
    return r1->length*r1->breadth;
}
int main()
{
    struct Rectangle r={10,20};
    int a;
    a=area(&r);
    printf("The Area Is %d",a);
    return 0;
}
*/
