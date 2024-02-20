#include<iostream>
using namespace std;
//Abstract class
class A
{
    public:
    void show()
    {
        cout<<"Content of Base";
    }
    virtual void name()=0;
};
class B:public A
{
    public:
    void name()
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
    a->name();
    return 0;
}