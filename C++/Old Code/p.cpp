// **************Question number 1*************

// #include<iostream>
// using namespace std;
// void swap(int* a,int* b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"The value of a is "<<a<<" The vlaue of b is "<<b<<endl;
//     swap(&a,&b);
//     cout<<"The value of a is "<<a<<" The vlaue of b is "<<b<<endl;

//     return 0;
// }

// ************************************* Question number 2**********************

// #include<iostream>
// using namespace std;

// int main()
// {
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(float)<<endl;
//     cout<<sizeof(char)<<endl;
//     cout<<sizeof(double)<<endl;
//     return 0;
// }

// ********************************* Question number 3***************************

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=0;
    while (t--)
    {
        if (n==n)
        {
            n-n;
        }

    cout<<"Last digit of given number: "<<n;
    }

    return 0;
}
