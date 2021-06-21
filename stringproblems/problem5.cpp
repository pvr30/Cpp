// find no.of vowels,consonants and words .
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    int vowels=0,spaces=0,consonants=0;
    cout<<"Enter A String"<<endl;
    getline(cin,str);
       for(int i=0;str[i]!='\0';i++)
       {
           if(str[i]=='a'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='e'||
           str[i]=='A'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='E')
             {
                 vowels++;
             }
            else if(str[i]==' ')
            {
                 spaces++;
            }
            else
            {
                 consonants++;
            }           
       }
    cout<<"In above line No.of Vowels is "<<vowels<<" , No. of consonants is "
      <<consonants<<" and No.of words is "<<spaces+1<<endl;
    return 0;
}