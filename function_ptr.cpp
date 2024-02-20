#include<iostream>
using namespace std;
// function pointer 

int show(int a)
{
    cout<<"A: "<<a;
}
int main()
{
    int (*ptr)(int);
    ptr=show;
    int display=ptr(5);
    cout<<"value of a is: "<<display;
    
    return 0;
}