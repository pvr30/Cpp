#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n1=3,n2=3,n3=3;
    int A[n1]={3,3,3};
    int B[n2]={3,3,3};
    int C[n3]={3,3,3};
     vector<int> v;
        int i = 0, j = 0, k = 0;
        int prev1, prev2, prev3;
        prev1 = prev2 = prev3 = INT_MIN;

        while (i < n1 && j < n2 && k < n3) {

            while (A[i] == prev1 && i < n1)
                i++;

            while (B[j] == prev2 && j < n2)
                j++;

            while (C[k] == prev3 && k < n3)
                k++;

            if (A[i] == B[j] && B[j] == C[k]) {
                cout<<A[i]<<" ";
                prev1 = A[i];
                prev2 = B[j];
                prev3 = C[k];
                i++;
                j++;
                k++;
            }
             else if (A[i] < B[j]) {
                prev1 = A[i];
                i++;
            }

            else if (B[j] < C[k]) {
                prev2 = B[j];
                j++;
            }

            else {
                prev3 = C[k];
                k++;
            }
        }

}
