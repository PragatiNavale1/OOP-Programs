#include<iostream>
using namespace std;
// pointer to object
class A
{
    public:
    void show()
    {
        cout<<"Base class\n";
    }

};
int main()
{
    A obj,*ptr;
    ptr=&obj;
    ptr->show();
    return 0;
}