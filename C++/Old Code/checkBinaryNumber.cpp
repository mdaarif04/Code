#include <iostream>
using namespace std;
class binary
{
    string s;
public:
    void read(void);
    void check(void);
    void display(void);
    void ons_compliment(void);
};

void binary :: read(void)
{
    cout<<"Enter the binary number "<<endl;
    cin>>s;
}
void binary::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number " << endl;
            break;
        }
    }
}
void binary:: ons_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary a;
    a.read();
    a.check();
    a.display();
    a.ons_compliment();
    a.display();

    return 0;
}