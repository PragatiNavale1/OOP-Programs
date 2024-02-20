#include<iostream>
using namespace std;
class Base
{
    public:
    Base()
    {
       cout<<"Base Constructor"<<endl; 
    }
    ~Base()
    {
        cout<<"Base Destructor"<<endl;
    }
};
class derived:public Base
{
    public:
    derived()
    {
        cout<<"Derived Costructor"<<endl;
    }
    ~derived()
    {
        cout<<"Derived Destructor"<<endl;
    }
};
int main()
{
    Base *b=new derived();
    delete b;
    return 0;
}