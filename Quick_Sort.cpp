#include<bits/stdc++.h>
using namespace std;

int Partition(int *arr,int s,int e)
{
    int i=s-1,j=s;

    int pivot=arr[e];

    for(;j<e;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[e]);

    return i+1;
}

void quickSort(int *arr,int s,int e)
{
    if(s>=e)return;

    int p=Partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int arr[]={1,5,2,7,9,23,6};
    int n=sizeof(arr)/sizeof(int);

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
