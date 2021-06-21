#include<iostream>
using namespace std;
int main()
{
    /// Method-1
 /*   char str[]="Vishal";
  //  char temp[7];
    int i,j;
    for(i=0;str[i]!='\0';i++){
        
    }
    char temp[i];
    i=i-1;
    for(j=0;i>=0;i--,j++){
        temp[j]=str[i];
    }
   // temp[j]='\0';
  // cout<<temp[j]<<endl;
    cout<<temp<<endl; */

    // Method-2
    char str[] = "Python";
    int i,j;
    for(j=0;str[j]!='\0';j++){}
    j=j-1;
    char temp;
    for(i=0;i<j;j--,i++){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str<<endl;
    return 0;
}