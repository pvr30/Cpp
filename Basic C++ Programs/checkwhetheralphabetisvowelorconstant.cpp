///Check whether a alphabet is vowel or consonants.
#include<iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"Enter Alphabet"<<endl;
    cin>>alphabet;
    switch(alphabet)
    {
        case 'a':cout<<"Vowel";
                 break;
        case 'i':cout<<"Vowel";
                 break;
        case 'o':cout<<"Vowel";
                 break;
        case 'u':cout<<"Vowel";
                 break;
        case 'e':cout<<"Vowel";
                 break;
        case 'A':cout<<"Vowel";
                 break;
        case 'I':cout<<"Vowel";
                 break;
        case 'O':cout<<"Vowel";
                 break;
        case 'U':cout<<"Vowel";
                 break;
        case 'E':cout<<"Vowel";
                 break;
        default :cout<<"Consonants";
                 break;
    }
    return 0;
}

