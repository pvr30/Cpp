#include <sstream>
#include <vector>
#include<algorithm>
#include <iostream>
using namespace std;
vector<int> parseInts(string str)
{
     for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=',')
        {
            cout<<str[i];
        }
        else if(str[i]==',')
        {
          cout<<endl;
        }
    }
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    return 0;
}
