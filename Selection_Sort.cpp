#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIdx])
            {
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
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

    SelectionSort(arr,n);

    printArr(arr,n);
}
