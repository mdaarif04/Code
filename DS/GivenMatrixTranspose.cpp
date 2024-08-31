// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     int a[3][3]={{3,4,8}, {2,9,4},{4,6,9}};

// //     cout<<"Transport Matrix"<<endl;
    

// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = i; j < 3; j++)
// //         {
// //             int temp=a[i][j];
// //             a[i][j]=a[j][i];
// //             a[j][i]=temp;
// //         }
        
// //     }
    
// //     for (int i = 0; i < 3; i++)
// //     {
// //         for (int j = 0; j < 3; j++)
// //         {
// //             cout<<a[i][j]<<" ";
// //         }
// //         cout<<endl;
        
// //     }
   
    
// //     return 0;
// // }
// // ****************************************Given by user****************************************************

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = i; j < 2; j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
             cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}
