#include<iostream>
using namespace std;
class binary
{
    string s;
    public:
    void read();
    void check();
    void onecs();
    void display();
};
void binary::read(void)
{
    cout<<"Enter the binary number "<<endl;
    cin>>s;
}
void binary::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='1' && s.at(i)!='0')
        {
            cout<<"Invalid binary number "<<endl;
            exit(0);
        }
        
    }
    
}
void binary::onecs(void)
{
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) =='0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    check();
    cout<<"Display the binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b1;
    b1.read();
    // b1.check();
    b1.display();
    b1.onecs();
    b1.display();
    
    return 0;
}