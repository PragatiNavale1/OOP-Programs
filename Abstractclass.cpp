#include<iostream>
using namespace std;
//Abstract class
class Animal {
public:
  virtual void speak() = 0; // pure virtual function
};
class Dog : public Animal {
public:
  void speak() {
    cout << "Woof!" << endl;
  }
};

int main()
{
    Dog d;
    d.speak();
}