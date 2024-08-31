//*******************************************************multipication****************************************************
// #include<iostream>
// using namespace std;
// int add(int n1,int n2);
// int main()
// {
//     int n1,n2,product=0;
//     cin>>n1>>n2;
//     for (int i = 0; i < n2; i++)
//     {
//         product=add(product,n1);
//     }
//     cout<<product<<endl;
    
//     return 0;
// }
// int add(int num1,int num2)
// {
//     for (int i = 0; i < num2; i++)
//     num1++;
//     return num1;
//     return 0;
    
// }
// *********************************************************divide********************************************************
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,result=0;
    cin>>n1>>n2;
    while (n1>=n2)
    {
        n1=n1-n2;
        result++;
    }
    cout<<result<<endl;
    
    return 0;
}
