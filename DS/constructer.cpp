#include<iostream>
using namespace std;
class test
{
    public:
    test()
    {
        int n=10;
        cout<<n;
    }
    ~test(){
        cout<<"object desttoyed ";
    }
};
int main()
{
    test ob;
    return 0;
}