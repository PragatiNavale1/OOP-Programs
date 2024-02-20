#include<iostream>
using namespace std;
class concate {

public:
    int m,n;
    concate(int x,int y)
    {
        m=x;
        n=y;
    }
    friend void operator +(concate &x, concate &y);
    
    void display()
    {
        cout<<"M="<<m<<"   N="<<n<<endl;
    }
};
    void operator +(concate &x, concate &y)
    {
        x.m=x.m+x.m;
        y.n=y.n+y.n;
    }

int main() {
    concate c1(12,34);
    c1.display();
    concate c2(100,40);
    c2.display();
    c1+c2;
    c1.display();
    return 0;
}