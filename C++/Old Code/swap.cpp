// #include<iostream>
// using namespace std;
// void swappointer(int* a,int* b) // Call by value
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void swap(int &a,int &b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"The value of "<<a<<" and "<<b<<endl;
//     // swappointer(&a,&b);
//     // cout<<"After the swap"<<endl<<"The value of "<<a<<" and "<<b<<endl;

//     swap(a,b);
//     cout<<"After swap function the value of "<<a<<" and "<<b<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n, prime = 1;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n!=2)
    {
        cout<<"This is not prime number";
    }else{
        cout<<"This is prime number";
    }
    
    return 0;
}