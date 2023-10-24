#include <bits/stdc++.h> 
using namespace std;
int firstocc(int arr[], int n , int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+(end-start)/2);
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1; 
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
         }
        else
        {
            start=mid+1;
        }
        mid=(start+(end-start)/2);
    }
    return ans;
}

int lastocc(int arr[], int n , int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+(end-start)/2);
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1; 
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
         }
        else
        {
            start=mid+1;
        }
        mid=(start+(end-start)/2);
    }
    return ans;
} 

int main()
{
  int arr[7]={1,2,3,3,3,3,4};
  int a[2];
  a[0]=firstocc(arr,7,3);
  a[1]=lastocc(arr,7,3);
  for(int i=0;i<2;i++)
  {
    cout<<a[i];
  }  
}
