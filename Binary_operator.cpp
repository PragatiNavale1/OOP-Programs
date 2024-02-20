#include<iostream>
using namespace std;
class concate {

public:
    string s1,Final_str;
    public:
    void getdata()
    {
        cout<<"Enter the String: ";
        cin>>s1;
    }
    void operator +(concate &x)
    {
        concate c;
        c.Final_str=s1+x.s1;
       
    }
    void display()
    {
        cout<<"Concatenated String: "<<Final_str;
    }
};

int main() {
    concate c1,c2;
    c1.getdata();
    c2.getdata();
    c1+c2;
    c1.display();
    return 0;
}