// #include<iostream>
// using namespace std;

// /*C++ Function to print leaders in an array */
// void printLeaders(int arr[], int size)
// {
// 	for (int i = 0; i < size; i++)
// 	{
// 		int j;
// 		for (j = i+1; j < size; j++)
// 		{
// 			if (arr[i] <=arr[j])
// 				break;
// 		}
// 		if (j == size) // the loop didn't break
// 			cout << arr[i] << " ";
// }
// }

// /* Driver program to test above function */
// int main()
// {
// 	int arr[] = {16, 17, 4, 3, 5, 2};
// 	int n = sizeof(arr)/sizeof(arr[0]);
// 	printLeaders(arr, n);
// 	return 0;
// }


#include<iostream>
using namespace std;
void printLeaders(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i+1; j < n; j++)
        {
            if (a[i]<=a[j])
            {
                break;
            }
            
        }
        if (j==n)
        {
            cout<<a[i]<<" ";
        }
        
        
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
    n=sizeof(a)/sizeof(a[0]);
    printLeaders(a,n);
    return 0;
}

