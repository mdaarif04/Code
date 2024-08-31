#include<iostream>
using namespace std;
void rotateArray (int a[],int n)
{
	for (int i = 0; i < 2; i++)
	{
		int temp = a[0];
		for (int j = 0; j < n -1; j++)
		{
			a[i] = a[i+1];
		}
		a[n-1] = temp;
	}

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	cout<<"Original Array "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
	rotateArray(a,n);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;

	return 0;
}
