#include<iostream>
using namespace std;
int main()
{
    char str1[10] = {'V', 'i', 's', 'h', 'a', 'l', '\0'};
    char str2[] = {'V', 'i', 's', 'h', 'a', 'l', '\0'};
    char str3[10] = "Vishal";
    char *str4 = "Vishal";
    //printf("%c",str1[1]);
    printf("%s",str1);
    printf("%s",str2);
    printf("%s",str3);
    printf("%s",str4);
    return 0;
}