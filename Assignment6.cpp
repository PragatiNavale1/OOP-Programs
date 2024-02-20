#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    char s[30],name[90],s1[20];
    virtual void get(){
        cout<<"Enter Student Name: ";
        cin>>name;
        cout<<"Enetr the Roll no: ";
        cin>>rollno;
        cout<<"Enter the subject name: ";
        cin>>s1;
    }
};
class record:public Student{
    public:
    int i,u;
    void get()
    {
        Student::get();
        cout<<"Enetr the Subject code: ";
        cin>>s;
        cout<<"Enter the internal marks: ";
        cin>>i;
        cout<<"Enter the univercity marks: ";
        cin>>u;

    }
    void display()
    {
        cout<<"Student Name \t\t Roll No \t\t Subject \t\t Subject Code \t\t Internal Marks \t\t University marks \n";
        cout<<name<<"\t\t"<<rollno<<"\t\t"<<s1<<"\t\t"<<s<<"\t\t"<<i<<"\t\t"<<u<<"\n";
    }
};
int main()
{
    Student *stu;
    record r;
    stu=&r;
    stu->get();
    r.display();
    return 0;
}
