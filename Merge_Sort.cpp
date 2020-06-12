#include<bits/stdc++.h>
using namespace std;

void Merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int i=s,j=mid+1;

    int ans[e-s +1];
    int k=0;

    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            ans[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            ans[k]=arr[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        ans[k]=arr[i];
        i++;
        k++;
    }

    while(j<=e)
    {
        ans[k]=arr[j];
        k++;
        j++;
    }
    k=0;

    for(int z=s;z<=e;z++)
    {
        arr[z]=ans[k];
        k++;
    }

}


void mergeSort(int *arr,int s,int e)
{
    if(s>=e)
        return;

    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    Merge(arr,s,e);
}


int main()
{
    int arr[]={2,4,1,24,6,8,9,};

    int n=sizeof(arr)/sizeof(int);

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
