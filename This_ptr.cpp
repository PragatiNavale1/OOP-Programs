#include<iostream>
using namespace std;
class Student
{
    int roll;
    string name;
    public:
    Student(int rollno,string na)
    {
        this->roll=rollno;
        this->name=na;

    }
    void show()
    {
        cout<<"\nRoll No: "<<roll;
        cout<<"\nNAME: "<<name;
    }
};
int main()
{
    Student st=Student(152,"Pragati");
    st.show();
    return 0;
}
