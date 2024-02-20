#include<iostream>
using namespace std;
class A
{
    int m,n;
    public:
    A(int x,int y)
    {
        m=x;
        n=y;
    }
    void display()
    {
        cout<<"M="<<m<<endl;
        cout<<"N="<<n<<endl;
    }
    void operator --()
    {
        m=m-1;
        n=n-1;
    }
};
int main()
{
    A obj1(20,15);
    obj1.display();
    --obj1;
    obj1.display();
    
    return 0;

}