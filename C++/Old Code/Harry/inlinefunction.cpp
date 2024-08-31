#include <iostream>
using namespace std;
// inline int sum(int n1, int n2)
// {
//     int c = n1 + n2;
//     return c;
// }

int moneyRecive(int currency , float factor=1.1)
{
    return currency*factor;
}
int main()
{
    // inline function ka use tab kiya jata h jab bahut kam use karna ho function ka
    // int n1, n2;
    // cin >> n1 >> n2;
    // cout <<"The sum of two number is "<< sum(n1, n2)<<endl;
    // cout <<"The sum of two number is "<< sum(n1, n2)<<endl;
    // cout <<"The sum of two number is "<< sum(n1, n2)<<endl;
    // cout <<"The sum of two number is "<< sum(n1, n2)<<endl;
    // cout <<"The sum of two number is "<< sum(n1, n2)<<endl;
    // cout <<"The sum of two number is "<< sum(n1, n2)<<endl;

    int money = 100000;
    cout<<"The money of "<<money<<" After years "<<moneyRecive(money)<<" Will be recive"<<endl;



    return 0;
}