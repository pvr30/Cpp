/*
Example:
Input:
2
5 3
1 2 3 4 5
1 2 3
6 2
85 25 1 32 54 6
85 2
Output:
5
7
*/
#include <iostream>
#include<algorithm>
using namespace std;

int Union(int a[],int b[],int n,int m){
  	sort(a,a+n);
	sort(b,b+m);
	int i1=0,j1=0;
	for(int p=1;p<n;p++){
		if(a[p]!=a[i1]){
			i1++;
			a[i1]=a[p];
		}
	}
	for(int q=1;q<m;q++){
		if(b[q]!=b[j1]){
			j1++;
			b[j1]=b[q];
		}
	}
	n=i1+1;
	m=j1+1;
   int temp[n+m],i=0,j=0,k=0;
   while(i<n && j<m){
       
	   if(a[i]<b[j]){
		   temp[k++]=a[i++];
	   }
	   else if(a[i]>b[j]){
		   temp[k++]=b[j++];
	   }
	   else if(a[i]==b[j]){
		   temp[k++]=a[i++];
		   j++;
	   }
   }
   while(i<n){temp[k++]=a[i++];}
   while(j<m){temp[k++]=b[j++];}
   return k;
}
int main() {
	//code
	int t;
	cin>>t;
    while(t>0){
    	int n,m;
    	cin>>n>>m;
    	int arr1[n],arr2[m];
    	for(int i=0;i<n;i++){
    	     cin>>arr1[i];
    	}
    	for(int i=0;i<m;i++){
    	    cin>>arr2[i];
    	}
    	cout<<Union(arr1,arr2,n,m)<<endl;
		t--;
	}
	return 0;
}
