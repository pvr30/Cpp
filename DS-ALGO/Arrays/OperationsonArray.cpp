// Some Important Operations On Array.

#include<iostream>
using namespace std;

class ArrayOperations{
public:
    int A[10];
    int size;
    int length;
    void display(class ArrayOperations arr){
         printf("Displaying The Array\n");
                for(int i=0;i<length;i++)
                    printf("%d ",A[i]);
                printf("\n");
    }

    // 1.Reverse an Array. - O(n) time
            void reverse(int a[]){
                int b[length];
                for(int i=0,j=length-1;i<length,j>=0;i++,j--){
                    b[i]=a[j];
                }
                for(int i=0;i<length;i++){
                    a[i]=b[i];
                }
            }

            // Another method of reversing an array.
            void reverseswap(int a[]){
                int temp;
                for(int i=0,j=length-1;i<j;i++,j--){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }

            // 2.Left Rotate / Left shift
            void leftshift(int a[]){
                int lastelement=a[0];
                for(int i=0;i<length;i++){
                    a[i]=a[i+1];
                }
                a[length-1]=lastelement;
            }

            // 3.Right Rotate / Right Shift 
            void rightshift(int a[]){
                int firstelement=a[length-1];
                for(int i=length-1;i>0;i--){
                    a[i]=a[i-1];
                }
                a[0]=firstelement;
            }
        
            // 4.Inserting In An Element In a Sorted Array
            void Insertinsortarray(int a[],int element){
                int i=length-1;
                while(a[i]>element){
                    a[i+1]=a[i];
                    i--;
                }
                length++;
                a[i+1]=element;
            } 

            // 5.Chech If An Array Is Sorted Or Not.
            string SortedArray(int a[]){
                for(int i=0;i<length-1;i++){
                    if(a[i]>a[i+1]){
                        return "UnSorted";
                     } 
                    }
                return "Sorted";
            }

            // 6.Put Negatives On One Side And Positives On Other Side.
            void Rearrange(int a[]){
                int i=0,j=length-1;
                while(i<j){
                    while(a[i]<0){i++;}
                    while(a[j]>=0){j--;}
                    if(i<j){swap(a[i],a[j]);}
                }
            }
};
int main()
{
    ArrayOperations arr={{10,20,30,40,50},10,5};
    cout<<"\nAfter Reverse An Array\n";
    arr.reverse(arr.A);
    arr.display(arr);
    cout<<"\nReversing an array using swap method\n";
    arr.reverseswap(arr.A);
    arr.display(arr);

    cout<<"\nLeft Rotating/Shifting\n";
    arr.leftshift(arr.A);
    arr.display(arr);

    cout<<"\nRight Rotating/Shifting\n";
    arr.rightshift(arr.A);
    arr.display(arr);

    cout<<"\nInserting An Element In Sorted Array.\n";
    arr.Insertinsortarray(arr.A,25);
    arr.display(arr);

    cout<<"\nCheking Sorted Array\n";
    cout<<arr.SortedArray(arr.A)<<endl;

    ArrayOperations B={{-2,3,9,-1,6,},10,5};
    cout<<"\n-ve On one Side"<<endl;
    arr.Rearrange(B.A);
    B.display(B);
    return 0;
}
