#include <iostream>
using namespace std;

class Employee {
public:
  string name;
  int id;
  string department;

  Employee(string name, int id, string department) {
    this->name = name;
    this->id = id;
    this->department = department;
  }

  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Department: " << department << endl;
  }
};

class Salary {
    public:
        int salary;

        Salary(int salary) {
            this->salary = salary;
        }

        void printSalary() {
            cout << "Salary: " << salary << endl;
        }
};

class EmployeeInfo : public Employee, public Salary {
public:
  EmployeeInfo(string name, int id, string department, int salary) : Employee(name, id, department), Salary(salary) {}

  void printAllInfo() {
    printInfo();
    printSalary();
  }
};

int main() {
  EmployeeInfo employeeInfo("John Doe", 1234, "Sales", 50000);

  employeeInfo.printAllInfo();

  return 0;
}