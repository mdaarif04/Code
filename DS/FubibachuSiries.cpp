// #include<iostream>
// using namespace std;
// void fub(int n)
// {
//     int t1=0;
//     int t2=1;
//     int nextTerm;
//     for (int i = 0; i <= n; i++)
//     {
//         nextTerm =t1+t2;
//         t1=t2;
//         t2=nextTerm;
//         cout<<t2<<endl;
//     }
    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     fub(n);
    

    
//     return 0;
// }

#include<iostream>
using namespace std;
void fub(int n)
{
    int t1=0;
    int t2=1;
    int nextTerm;
    for (int i = 0; i < n; i++)
    {
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        cout<<t2<<endl;
    }
    
}
int main()
{
    int n;
    cin>>n;
    fub(n);
    return 0;
}