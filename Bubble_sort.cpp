#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
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

    bubbleSort(arr,n);

    printArr(arr,n);
}
