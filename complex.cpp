#include<iostream>
using namespace std;
class complex
{
    float x;
    float y;
    public:
    complex()
    {
        x=0;
        y=0;
    }
    complex(float m,float n)
    {
        x=m;
        y=n;
    }
    void display()
    {
        cout<<x<<"+"<<y<<"i\n";
    }
    void operator+(complex &c)
    {
        x=x+c.x;
        y=y+c.y;
    }
    void operator*(complex &c)
    {
        x=(x*c.x)-(y*c.y);
        y=(y*c.x)+(x*c.y);
    }
};
int main()
{
    complex c1;
    cout<<"Default Constructor Value =";
    c1.display();
    complex c2(10,20);
    complex c3(11,12);
    cout<<"Addition is : ";
    c2+c3;
    c2.display();
    cout<<"Multiplication is : ";
    c2*c3;
    c2.display();
    return 0;
}