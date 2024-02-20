#include <iostream>
#include <string>

using namespace std; 

class Person {
private:
    string name;
    string dateOfBirth;
    string bloodGroup;
    double height;
    double weight;
    string insurancePolicyNumber;
    string contactAddress;
    string telephoneNumber;
    string drivingLicenceNumber;

public:
    // Constructor
    Person(const string& n, const string& dob, const string& bg,
       double h, double w, const string& insurance, const string& address,
       const string& phone, const string& licence)
{
    name = n;
    dateOfBirth = dob;
    bloodGroup = bg;
    height = h;
    weight = w;
    insurancePolicyNumber = insurance;
    contactAddress = address;
    telephoneNumber = phone;
    drivingLicenceNumber = licence;

    cout << "Person object created for " << name << endl;
}

    // Default Constructor
   Person()
{
    name = "default name";
    dateOfBirth = "";
    bloodGroup = "";
    height = 0;
    weight = 0;
    insurancePolicyNumber = "";
    contactAddress = "";
    telephoneNumber = "";
    drivingLicenceNumber = "";
}
    // Copy Constructor
   Person(const Person& other)
{
    name = other.name;
    dateOfBirth = other.dateOfBirth;
    bloodGroup = other.bloodGroup;
    height = other.height;
    weight = other.weight;
    insurancePolicyNumber = other.insurancePolicyNumber;
    contactAddress = other.contactAddress;
    telephoneNumber = other.telephoneNumber;
    drivingLicenceNumber = other.drivingLicenceNumber;

    cout << "Copy constructor called for " << name << endl;
}

    // Destructor
    ~Person() {
       cout<<"Automatically called Destructor for :"<<name<<endl;
    }

    // Member function to display information
    void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
        cout << "Blood Group: " << bloodGroup << endl;
        cout << "Height: " << height << " cm" << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Insurance Policy Number: " << insurancePolicyNumber << endl;
        cout << "Contact Address: " << contactAddress << endl;
        cout << "Telephone Number: " << telephoneNumber << endl;
        cout << "Driving Licence Number: " << drivingLicenceNumber << endl;
    }
};

int main() {
    // Using the constructor to initialize data
   
    // Using the default constructor
    cout << "Default constructor called." << endl;
    Person person1;
    person1.displayInformation();
    cout<<endl;
    
    // Using the parame constructor
    const int numberOfPersons = 3;
    Person personArray[numberOfPersons];

    // Initializing objects in the array with data
    personArray[0] = Person("John Doe", "01-01-1990", "A+", 175.5, 68.5,"ABC123", "123 Main St", "555-1234", "DL12345");

    personArray[1] = Person("Jane Smith", "02-02-1995", "B-", 160.0, 55.0,"XYZ456", "456 Oak St", "555-5678", "DL67890");

    personArray[2] = Person("Bob Johnson", "03-03-1985", "O+", 180.0, 80.0, "PQR789", "789 Pine St", "555-8765", "DL54321");

    // Displaying information for each person in the array
    for (int i = 0; i < numberOfPersons; ++i) {
        cout << "\nPerson " << i + 1 << " Information:\n";
        personArray[i].displayInformation();
    }
    cout<<endl;
    // Using the copy constructor
    Person person3 = personArray[1];
    person3.displayInformation();
    cout<<endl;
    
    
    return 0;
}