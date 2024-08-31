//  The challenge is that we have initialize age,name,sal without accepting input from the users

#include <iostream>
#include <string.h>
using namespace std;
class ShowIntialized
{
    int age;
    char name[20];
    float sal;

public:
    void set();
    void show();
};

void ShowIntialized::set()
{
    age = 21;
    strcpy(name, "Md Aarif Raza");
    sal = 40000.0;
}
void ShowIntialized::show()
{
    cout << age << " " << name << " " << sal << endl;
}

int main()
{
    ShowIntialized obj;
    obj.set();
    obj.show();

    return 0;
}