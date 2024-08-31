//**************************************************** Structuer ******************************************
// #include<iostream>
// using namespace std;
// struct emp
// {
//     int id;
//     char varchr;
//     float salary;
// };
// // typedef struct emp
// // {
// //     int id;
// //     char varchr;
// //     float salary;
// // } ep;  //this is sortcut for calling emp

// int main()
// {
//     // ep aarif;  //this is when using this then use typedef
//     struct emp aarif;
//     aarif.id=1;
//     aarif.varchr='A';
//     aarif.salary=100000;
//     cout<<"The value is :"<<aarif.id<<endl;
//     cout<<"The value is :"<<aarif.varchr<<endl;
//     cout<<"The value is :"<<aarif.salary<<endl;
//     return 0;
// }

//**************************************************** Union *******************************************

// #include<iostream>
// using namespace std;

// union money
// {
//     int rice;
//     char varchar;
// };
// int main()
// {
//     union money m1;
//     m1.rice=32;
//     m1.varchar='A';
//     cout<<"The value is :"<<m1.rice<<endl;
//     cout<<"The value is :"<<m1.varchar<<endl;
//     return 0;
// }

// ************************************************** enum *********************************************

#include<iostream>
using namespace std;

union money
{
    int rice;
    char varchar;
};
int main()
{
    enum meal{breakfast,launch,dinner};
    // meal m1=breakfast; this is acceptable
    meal m1=launch; 
    // cout<<m1<<endl; //acceptable
    cout<<(m1==1)<<endl; //Correct then print 1 false then print 0
    // cout<<breakfast<<endl;
    // cout<<launch<<endl;
    // cout<<dinner<<endl;
    return 0;
}