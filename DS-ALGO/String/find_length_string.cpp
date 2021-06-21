#include<iostream>
using namespace std;
int main()
{
    char *str = "Vishal";
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    printf("Length Of String Is %d",i);
    return 0;
}