#include<iostream>
using namespace std;
int main()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,1,2,3}};  // Normal Declaration In Stack.
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    cout<<"Row In Heap Allocation.\n";
// Now Declare Row Array In Heap .
    int *B[3];  // Stack
    B[0] = new int[4]; // Heap
    B[1] = new int[4]; //Heap
    B[2] = new int[4]; // Heap
    /* 
     for C language We Can write like this.
     int *B[3];
     B[0] = (int *)malloc(4*sizeof(int));   
    */ 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            B[i][j]=1;
        }
    }
    for(auto &x:B) // for each loop.
    {
        for(auto &y:B)
        {
          cout<<*y<<" ";
        }
        cout<<"\n";
    }
 // Complete Heap Declaration.
   printf("\n\nIn Heap Memory\n");
    int **C;
    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4]; 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++){
            C[i][j]=2;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}