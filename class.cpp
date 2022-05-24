#include <iostream>
using namespace std;

class Mammals
{
    public:
    void Mammal()
    {
        cout<<"I am mammal"<<endl;
    }
};

class Marineanimals
{
    public:
    void Marine()
    {
        cout<<"I am marine animal"<<endl;
    }
};

class BlueWhale: public Mammals, public Marineanimals
{
    public:
    void blue()
    {
        cout<<"I belong to both categories: Mammals as well as marine animals"<<endl;
    }
};

int main()
{
    Mammals obj;
    obj.Mammal();

    Marineanimals obj1;
    obj1.Marine();

    BlueWhale obj3;
    obj3.blue();
    obj3.Mammal();
    obj3.Marine();
}