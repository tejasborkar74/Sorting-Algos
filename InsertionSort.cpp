#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int *arr,int n)
{
   for(int i=1;i<n;i++)
   {
       int j=i-1;
       int no=arr[i];

       while(j>=0 && arr[j]>no)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=no;
   }
}
void printArr(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={5,3,23,1,6};
    int n=sizeof(arr)/sizeof(int);

    InsertionSort(arr,n);

    printArr(arr,n);
}
