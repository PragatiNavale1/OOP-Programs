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
    complex operator+(complex);
    complex operator*(complex);
    friend istream &operator>>(istream &input,complex &t)
    {
        cout<<"Enter the real part : ";
        input>>t.x;
        cout<<"Enter the imaginary part : ";
        input>>t.y;
    }
    friend ostream &operator<<(ostream &output,complex &t)
    {
        output<<t.x<<"+"<<t.y<<"i\n";
    }
};
complex complex::operator+(complex c)
{
complex temp1;
temp1.x=x+c.x;
temp1.y=y+c.y;
return(temp1);
}
complex complex::operator*(complex c)
{
complex temp2;
temp2.x=(x*c.x)-(y*c.y);
temp2.y=(y*c.x)+(x*c.y);
return(temp2);
}
int main()
{
    complex c1,c2,c3,c4;
    cout<<"Default Constructor Value ="<<c1;
    cout<<"Enter the First Number"<<endl;
    cin>>c1;
    cout<<"Enter the Second Number"<<endl;
    cin>>c2;
    c3=c1+c2;
    c4=c1*c2;
    cout<<"First Number is : "<<c1;
    cout<<"Second Number is : "<<c2;
    cout<<"Addition is : "<<c3;
    cout<<"Multiplication is : "<<c4;
    return 0;
}