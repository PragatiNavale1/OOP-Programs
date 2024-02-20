#include<iostream>
using namespace std;
class Number
{
    public:
    int num;
    void getnum()
    {
        cout<<"\nEnter Number: ";
        cin>>num;
    }
    

};
class Square:public Number
{
    public:
    int square;
    void getsquare()
    {
        square = num * 2;
        cout<<"\nSuare of "<<num<<": "<<square;
    }
 
};
class Cube:public Number
{
    public:
    int cube;
    void getCube()
    {
        
        cube = num * 3;
        cout<<"\nCube of "<<num<<": "<<cube;

    }
    
};
int main()
{
    Square sq;
    Cube cu;
    sq.getnum();
    sq.getsquare();
    cu.getnum();
    cu.getCube();

    return 0;
}