#include<iostream>
using namespace std;
int findpeakelement(int arr[],int low,int high,int n)
{
    int mid=low+(high-low)/2;
    if (mid==0||arr[mid-1]<=arr[mid]&&(mid==n-1 ||arr[mid+1]<=arr[mid]))
    {
        return mid;
    }
    else if (mid>0 ||arr[mid+1]>arr[mid])
    {
        return findpeakelement(arr,mid-1,low,n);
    }
    else{
        return findpeakelement(arr,high,mid+1,n);
    }
    
    
}
int main()
{
    int arr[]={23,45,6,78,90,4};
    int n=6;
    cout<<findpeakelement(arr,0,n-1,n);
    
    return 0;
}