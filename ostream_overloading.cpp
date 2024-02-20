#include<iostream>
using namespace std;
class Person {

public:
    string name;
    int age;

    Person(string name = " ", int age = 0) : name(name), age(age) {}

    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Age: " << person.age;
        return os;
    }
};

int main() {
    Person person("Alice", 30);
    cout << person << endl;  // Output: Name: Alice, Age: 30
    return 0;
}