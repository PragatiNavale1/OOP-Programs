#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int marks[5];
    cout<<"Enter the elements: ";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    ptr=marks;
    cout<<"*ptr: "<<*ptr;
    cout<<"*Marks:"<<*marks;
    return 0;
}