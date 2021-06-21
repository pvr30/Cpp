#include<iostream>
using namespace std;
class Player{
public:
       void display(int i,int j,int t){
   int s[3][3]={'-','-','-','-','-','-','-','-','-'};
   s[p][q]=t;
   for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<s[i][j]<<" ";
        }

        cout<<endl;
    }
  }
};
int main()
{
    int a[3][3];
    Player p;
    p.display(0,0,1);
    p.display(0,1,2);
    p.display(0,2,3);
    return 0;
}
