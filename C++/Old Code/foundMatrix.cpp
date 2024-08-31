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
//             cin>>arr[i][j];
//         }
        
//     }
//     cout<<"matrix "<<endl;
//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
//     int x;
//     cin>>x;
//     bool f=false;

//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (arr[i][j]==x)
//             {
//                 cout<<i<<j<<" "<<endl;
//                 f=true;
//             }
            
//         }
        
//     }
//     if (f)
//     {
//         cout<<"Element is found"<<endl;
//     }
//     else{
//         cout<<"Element is not found"<<endl;

//     }
    
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b,c;
//     int n;
//     cin>>a>>b>>c;
//         if (a>b)
//         {
//             cout<<a<<endl;
//         }
//         else if (b>c)
//         {
//             cout<<b<<endl;
            
//         }
//         else if (c>a)
//         {
//             cout<<b<<endl;
            
//         }


    
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int r,c;
//     cin>>r>>c;
//     int arr[r][c];
//     for (int i = 0; i <r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     cout<<"Matrixs"<<endl;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
//     int max;
//     cin>>max;
//     bool f=false;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (arr[i][j]==max)
//             {
//             cout<<i<<j<<" Element is found"<<endl;
//             f=true;
                
//             }
            
//         }
//         cout<<endl;
        
//     }
//     if (f)
//     {
//         cout<<"Element is found"<<endl;
//     }
//     else{
//         cout<<"Element is not found"<<endl;

//     }
    


    
    
    
//     return 0;
// }
#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<<"Printing Matrix"<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"Transport Matrix"<<endl;
    

    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < c; j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
   
    
    return 0;
}