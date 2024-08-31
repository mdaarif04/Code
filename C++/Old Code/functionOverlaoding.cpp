#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"Using 2 arguments "<<endl;
    return a+b;
}
int sum(int a,int b, int c)
{
    cout<<"Using 3 arguments "<<endl;
    return a+b+c;
}
// cylinder
int volume(double r,int h)
{
    return (3.14*r*r*r*h);
}
// rectungle
int volume(int l,int b,int h)
{
    return (l*b*h);
}
// cub
int volume(int a)
{
    return (a*a*a);
}
int main()
{
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3,4 and 6 is "<<sum(3,4,6)<<endl;
    cout<<"The cylinder of 4 and 5 is "<<volume(2,3)<<endl;
    cout<<"The rectangle of l, b and h is "<<volume(3,4,6)<<endl;
    cout<<"The cube of a*a* is "<<volume(3)<<endl;
return 0;
}