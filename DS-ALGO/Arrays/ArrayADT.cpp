// Array And Operations On It.
 
#include<iostream>
#include<algorithm>
using namespace std;
class Array{
public:
        int A[10];
        int size;
        int length;
        // 1.Display(array)
            void display(class Array arr)
            {
                printf("Displaying The Array\n");
                for(int i=0;i<length;i++)
                    printf("%d ",A[i]);
                printf("\n");
            }
        // 2.Add(x)/Append(x)
            void add(int element)
            {
                if (size>length)
                {
                    A[length]=element;
                    length++;
                }
                else{printf("Not Enough Size In Array.\n");}
            }
        
        // 3.Insert(index,element)
            void insert(int index,int element)
            {
                if(index>=0 && index<=length){
                    for(int i=length;i>=index;i--)
                        A[i]=A[i-1];
                    A[index]=element;
                    length++;
                }
                else{printf("Enter Valid Index\n");}
            }

        // 4. Delete An Element From An Elements.
        void _delete(int index)
        {
            int temp=0;
            if(index>=0 && index<=length){
               // temp=A[index];  //in just case if we want to display deleted element.
                for(int i=index;i<length-1;i++){
                    A[i]=A[i+1];
                }
                length--;
            }
            else{printf("Enter Valid Index\n");}
        }

        // 5.Linear Search  Time Complexity-O(n)
        int Linear_Search(int element){
            for(int i=0;i<=length;i++){
                if(element==A[i])
                    printf("The Given Element Is On Index %d\n",i); 
            }
            return -1;
        }
        void Swap(int a,int b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
        }
        // Inmroving Linear Search 
            // 1. Transposition Method.
                    int Linear_Search_T(int element){
                            for(int i=0;i<=length;i++){
                                if(element==A[i]){
                                    Swap(A[i],A[i-1]);
                                    printf("The Given Element Is On Index %d\n",i);
                                } 
                            }
                            return -1;
                        }

            // 2. Move Front To End.
                    int Linear_Search_FTE(int element){
                                for(int i=0;i<=length;i++){
                                    if(element==A[i]){
                                        Swap(A[i],A[0]);
                                        printf("The Given Element Is On Index %d\n",i); 
                                    }
                                }
                                return -1;
                            }

            // 6.Binary Search , time complexity-O(logn)
            int Binary_Search(int key){
                int l=0,h=length,mid;
                while(l<=h){
                    mid=(l+h)/2;
                    if(key==A[mid]){
                        return mid;
                    }
                    else if(key<A[mid]){
                        h=mid-1;
                    }
                    else if(key>A[mid]){
                        l=mid+1;
                    }
                }
                return -1;
            }

            //  Binary Search Using Recursion. --O(logn)
            int Binary_Search_Recursion(int a[],int l,int h,int key){
                int mid;
                if(l<=h){
                    mid=(l+h)/2;
                    if(key==a[mid]){
                        return mid;
                    }
                    else if(key<a[mid]){
                        Binary_Search_Recursion(a,l,mid-1,key);
                    }
                    else if(key>a[mid]){
                        Binary_Search_Recursion(a,mid+1,h,key);
                    }
                }
                else{
                    return -1;
                }
            }


            // 7.get(index)  
            int get(int index){
                if(index>=0 && index<=length){
                    return A[index];
                }
            }

            // 8.set(index,element)
            void set(int index,int element){
                if(index>=0 && index<=length){
                    A[index]=element;
                }
            }

            // 9.max(array)
            int max(int a[]){
                int max=a[0];
                for(int i=1;i<length;i++){
                    if(a[i]>max){
                        max=a[i];
                    }
                }
                return max;
            }

            // 10.min(array)
            int min(int a[]){
                int min=a[0];
                for(int i=1;i<length;i++){
                    if(a[i]<min){
                        min=a[i];
                    }
                }
                return min;
            }

            // 11.sum(array)
            int sum(int a[]){
                int sum=0;
                for(int i=0;i<length;i++){
                    sum+=a[i];
                }
                return sum;
            }

            // 12.avg(array)
            int avg(int a[]){
                int sum=0;
                for(int i=0;i<length;i++){
                    sum+=a[i];
                }
                return sum/2;
            }

            
}; 
int main()
{
    Array arr={{1,2,3,4,5},10,5};
    arr.display(arr);
    arr.add(6);
    printf("After Adding/Appending Element\n");
    arr.display(arr);
    arr.insert(0,10);
    printf("After Inserting An Element\n");
    arr.display(arr);
    arr._delete(0);
    printf("After Deleting An Element\n");
    arr.display(arr);
    printf("Searching Element using Linear Search\n");
    arr.Linear_Search(4);
    arr.Linear_Search_FTE(4);
    arr.Linear_Search_T(4);
    printf("Searching Element using Binary Search\n");
   // printf("%d\n",arr.Binary_Search(4));
    cout<<arr.Binary_Search(6)<<endl;

    printf("\nBinary Search Using Recursion\n");
    cout<<arr.Binary_Search_Recursion(arr.A,0,arr.length,6)<<endl;  

    cout<<"\nGet Operation\n";
    cout<<arr.get(3)<<endl;

    cout<<"\nAfter Set Operation\n"<<endl;
    arr.set(0,100);
    arr.display(arr);

    cout<<"\nMaximum And Minimum Element In An Array.\n";
    cout<<"Maximum:- "<<arr.max(arr.A)<<endl;
    cout<<"Minimum:- "<<arr.min(arr.A)<<endl;

    cout<<"\nSum And Average Of Elements In An Array.\n";
    cout<<"Sum:- "<<arr.sum(arr.A)<<endl;
    cout<<"Average:- "<<arr.avg(arr.A)<<endl;
    return 0;
}
