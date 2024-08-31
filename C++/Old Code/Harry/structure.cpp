#include<iostream>
using namespace std;

// struct employee
// {
//     int eid;
//     char favchar;
//     int salary;
// };

// typedef struct employee
// {
//     int eid;
//     char favchar;
//     int salary;
// }ep;

union money
{
    int rice;
    char car;
    int currency;
};

int main()
{
    // ep Aarif;  //using typedef
    // struct employee Aarif; //using structure
    // Aarif.eid=1;
    // Aarif.favchar='A';
    // Aarif.salary=1234543;
    // cout<<"The Employee eid is "<<Aarif.eid<<endl;
    // cout<<"The Employee favchar is "<<Aarif.favchar<<endl;
    // cout<<"The Employee salary is "<<Aarif.salary<<endl;

    // using union
    // Once time You can use only one data type
    // union money u1;
    // u1.rice=4;
    // u1.car='Bogati';
    // u1.currency=45;
    // cout<<"The Employee rice is "<<u1.rice<<"kg"<<endl;
    // cout<<"The Employee car is "<<u1.car<<endl;
    // cout<<"The Employee currency is "<<u1.currency<<endl;

    // enum: 
    // You can like use integer number
    enum meal{Brackfast,lunch,dinner};
    cout<<Brackfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}