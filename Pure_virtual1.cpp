#include<iostream>
using namespace std;
class Shape
{
    public:
    float dia;
    void getdia()
    {
        cout<<"Enter the diamension: ";
        cin>>dia;
    }
    virtual void areacal()=0;
};
class square: public Shape
{
    public:
    void areacal()
    {
        cout<<"Area of Square: "<<dia*dia<<endl;

    }
};
class circle: public Shape
{
    public:
    void areacal()
    {
        cout<<"Area of circle: "<<3.14*dia*dia<<endl;

    }
};
int main()
{
    square s;
    s.getdia();
    s.areacal();

    circle c;
    c.getdia();
    c.areacal();
    return 0;
    
}