#include<bits/stdc++.h>
using namespace std;
void CountingSort(int *arr,int n)
{int m=INT_MIN;

    for(int i=0;i<n;i++)
   {
        if(arr[i]>m)
        {
            m=arr[i];
        }
   }

   int freq[m+1]={0};

   for(int i=0;i<n;i++)
   {
       freq[arr[i]]+=1;
   }

   int ans[n];
   int j=0;

   for(int i=0;i<m+1;i++)
   {
       while(freq[i]!=0)
       {
           ans[j]=i;
           j++;
           freq[i]--;
       }
   }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
  int arr[]={2,3,5,1,5,10};
   int n=sizeof(arr)/sizeof(int);

  CountingSort(arr,n);


}
