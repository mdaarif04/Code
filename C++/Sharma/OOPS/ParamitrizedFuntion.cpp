#include<iostream>
#include <string.h>
using namespace std;
class ParamitrizedFuntion
{
    int age;
    char name[20];
    float sal;
public:
    void set(int, char*,float);
    void show();
};

void ParamitrizedFuntion::set(int a, char* e, float s)
{
    age = a;
    strcpy(name,e);
    sal = s;
}

void ParamitrizedFuntion::show()
{
    cout<<age<<" "<<name<<" "<<sal<<endl;
}

int main()
{
    ParamitrizedFuntion obj;
    obj.set(21,"Aarif",40000.0);
    obj.show();
    
    return 0;
}