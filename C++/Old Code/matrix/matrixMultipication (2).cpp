// #include<iostream>
// using namespace std;

// int main()
// {
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>m1[i][j];
//         }

//     }
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin>>m2[i][j];
//         }

//     }
//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             ans[i][j]=0;
//         }

//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }

//         }

//     }
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout<<ans[i][j]<<"   ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>m1[i][j];
//         }
        
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin>>m2[i][j];
//         }
        
//     }
//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             ans[i][j]=0;
//         }
        
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
            
//         }
        
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout<<ans[i][j]<<"  ";
//         }
//         cout<<endl;
        
//     }
    
    
    
    
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int n1,n2,n3;
//     cin>>n1>>n2>>n3;
//     int m1[n1][n2];
//     int m2[n2][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>m1[i][j];
//         }
        
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin>>m2[i][j];
//         }
        
//     }
//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             ans[i][j]=0;
//         }
        
//     }

//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 ans[i][j]+=m1[i][k]*m2[k][j];
//             }
            
//         }
        
//     }
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout<<ans[i][j]<<"  ";
//         }
//         cout<<endl;
        
//     }

     

    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int r,c;
//     cin>>r>>c;
//     int arr[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//            cin>>arr[i][j];
//         }
        
//     }
//     cout<<"Matrix"<<endl;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = i; j < c; j++)
//         {
//            int temp=arr[i][j];
//            arr[i][j]=arr[j][i];
//            arr[j][i]=temp;
//         }
        
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//            cout<<arr[i][j]<<" ";
//         }
        
//         cout<<endl;
//     }
    
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter row and Columns: "<<endl;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin>>m1[i][j];
        }
        
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin>>m2[i][j];
        }
        
    }
    int ans[n1][n3];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j]=0;
        }
        
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
            
        }
        
    }
    cout<<"Matric multiplication: "<<endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
        
    }

    

    return 0;
}