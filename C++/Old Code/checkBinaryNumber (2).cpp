#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;
    public:
    void read(void);
    void ckh_bin(void);
};
void binary ::read(void)
{
    cout<<"Enter binary number: "<<endl;
    cin>>s;
}
void binary ::ckh_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0',s.at(i)!='1')
        {
            cout<<"Incorrect binary number: "<<endl;
            exit(0);
        }
        
    }
    
}
int main()
{
    binary a;
    a.read();
    a.ckh_bin();
    
    return 0;
}