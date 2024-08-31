#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int arr[n1][n2];
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cin>>arr[i][j];
		}
		
	}
	cout<<"revers"<<endl;
	for (int i = 0; i < n1; i++)
	{
		for (int j = i; j < n2; j++)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
		
	}
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}