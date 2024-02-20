#include <iostream>
using namespace std;
template<class T1,class T2>
class A
{
    public:
    T1 num1;
    T2 num2;
    void add()
    {
    cout<<"Give input for num1 & num2:";
    cin>>num1>>num2;
    cout<<"Addition of num1 & num2 :"<<num1+num2;
    }
};
int main()
{
    A<int,int>d;
    d.add();
    return 0;
}
