#include<iostream>
using namespace std;
class Person {
    public:
    string name;
    int age;

    Person(string name = " ", int age = 0) : name(name), age(age) {}

    // Overloading the >> operator for input
    friend istream& operator>>(istream& is, Person& person1) {
        cout << "Enter name: ";
        is >> person1.name;
        
        cout << "Enter age: ";
        is >> person1.age;

        return is;
    }
};

int main() {
    Person person1;
    cout << "Enter details for a person:\n";
    cin >> person1;

    return 0;
}