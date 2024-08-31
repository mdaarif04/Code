#include<iostream>
#include<thread>
using namespace std;
void fun1()
{
    cout<<"A";
}
void fun2()
{
    cout<<"A";
}
void fun3()
{
    cout<<"R";
}
void fun4()
{
    cout<<"I";
}
void fun5()
{ 
    cout<<"F";
}
int main()
{
    thread t1(fun1);
    thread t2(fun2);
    thread t3(fun3);
    thread t4(fun4);
    thread t5(fun5);
    t1.join();    
    t2.join();    
    t3.join();    
    t4.join();    
    t5.join();    
    return 0;
}
