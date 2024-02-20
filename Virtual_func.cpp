#include<iostream>
using namespace std;
//RUNTIME POLIMORPHISM
class A
{
    public:
    virtual void show()
    {
        cout<<"Content of Base";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"Content of Derived";

    }
};
int main()
{
    //B obj;
    //obj.show();
    //return 0;
    A *a;
    B b;
    a=&b;
    a->show();
    return 0;
}