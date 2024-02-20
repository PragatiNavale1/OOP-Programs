#include<iostream>
using namespace std;

class Student
{
    public:
    int s1,s2,s3;
    char name[50];

    void getdata()
    {
        cout<<"Student Name: ";
        cin>>name;
        cout<<"\nSubject1 Marks: ";
        cin>>s1;
        cout<<"\nSubject2 Marks: ";
        cin>>s2;
        cout<<"\nSubject3 Marks: ";
        cin>>s3;
    }
    void compute()
    {
        int total,avg;
        total = s1 + s2 + s3;
        avg= total / 3;

        cout<<"\nTotal: "<<total;
        cout<<"\nAverage: "<<avg;
    }
};
int main()
{
    Student obj;
    obj.getdata();
    obj.compute();

    return 0;
}