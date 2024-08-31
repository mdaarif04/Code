// #include<iostream>
// using namespace std;

// int main()
// {
//     // int a=20;
//     // int *ptr=&a;
//     // cout<<*ptr<<endl;
//     // *ptr=10;
//     // cout<<a<<endl;
//     int arr[]={39,23,56,78,55};
//     cout<<*arr<<endl;
//     int *ptr=arr;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<*(arr+i)<<endl;
//         // ptr++;
//     }
    


//     return 0;
// }
// #include<iostream>
// using namespace std;
// void swap(int *a,int *b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// } 

// int main()
// {
//     int a=2;
//     int b=4;
//     int *aptr=&a;
//     int *bptr=&b;
//     swap(&a,&b);  //call by value
//     // swap(aptr,bptr);  //call by reference
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
void increament(int a)
{
    a++;

}
int main()
{
    int a=3;
    increament(a);
    cout<<a<<endl;
    return 0;
}