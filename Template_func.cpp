#include<iostream>
using namespace std;
template <class T1, class T2> 
void swap(T1 x, T2 y)
{
    cout<<"before swapping: "<<x<<" "<<y;
    T1 temp=x;
    x=y;
    y=temp;
    cout<<"After swapping: "<<x<<" "<<y;
}
int main()
{
    swap(2,3);
    
 return 0;
}
