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
