#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

int partiton(int arr[],int l, int r)
{
	int pivot=arr[r];
	int i=l-1;

	for (int j = l; j < r; j++)
	{
		if (arr[j]<pivot)
		{
			i++;
			swap(arr,i,j);
		}
		
	}
	swap(arr,i+1,r);
	return i+1;
	
}

void quickSort(int arr[],int l,int r)
{
	if (l<r)
	{
		int pi=partiton(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);
	}
	
}
int main()
{
	int arr[5]={5,34,31,65,21};
	quickSort(arr,0,4);
	for (int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}

