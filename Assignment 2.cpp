#include<iostream>
using namespace std;
class vehicles
{
    public:
    int mileage ,price;
    };
   
    class car : public vehicles
    {
        public:
        int owernership_cost, warrenty,capacity;
        char fuel_type[20];
      
    };
    class audi : public car
    {
      char model_type[20];

    };
     class Ford : public car
    {
      char model_type[20];

    };

     class bike : public vehicles
    {
        public:
        int no_cylinder, no_gears;
        char cooling_type[20];
      
    };
     class bajaj : public bike
    {
      char make_type[20];

    };
     class tvs : public bike
    {
      char make_type[20];

    };
int main()
{
    audi a;
    cout<<"ENTER DETAILS OF AUDI :\n";
    cout<<"Enter Owernership cost:";
    cin>>a.owernership_cost;
    cout<<"Enter warrenty of car:";
    cin>>a.warrenty;
    cout<<"Enter capacity:";
    cin>>a.capacity;
    cout<<"Enter fuel type:";
    cin>>a.fuel_type;
    cout<<"Enter mileage:";
    cin>>a.mileage;
    cout<<"Enter price:";
    cin>>a.price;
    
    
    cout<<"************************************************\n";

    Ford f;
    cout<<"ENTER DETAILS OF FORD :\n";
    cout<<"Enter Owernership cost:";
    cin>>f.owernership_cost;
    cout<<"Enter warrenty of car:";
    cin>>f.warrenty;
    cout<<"Enter capacity:";
    cin>>f.capacity;
    cout<<"Enter fuel type:";
    cin>>f.fuel_type;
    cout<<"Enter mileage:";
    cin>>f.mileage;
    cout<<"Enter price:";
    cin>>f.price;

int choice;
cout<<"Choose the car :\n";
cout<<"1. AUDI\n";
cout<<"2. FORD\n";
cin>>choice;
switch(choice)
{
    case 1:
    cout<<"AUDI INFO : \n";
    cout<<"Cost : "<<a.owernership_cost<<"Rupees\n";
    cout<<" Warrenty : "<<a.warrenty<<"Years\n";
     cout<<"Capacity : "<<a.capacity<<"Seats\n";
     cout<<"Fuel Type: "<<a.fuel_type<<"\n";
     cout<<"Mileage: "<<a.mileage<<"Kmpl\n";
    cout<<"Price: "<<a.price<<"Rupees\n";
    break;
     case 2:
    cout<<"FORD INFO : \n";
    cout<<"Cost : "<<f.owernership_cost<<"Rupees\n";
    cout<<"Warrenty : "<<f.warrenty<<" Years\n";
    cout<<"Capacity : "<<f.capacity<<"Seats\n";
    cout<<"Fuel Type: "<<f.fuel_type<<"\n";
    cout<<"Mileage: "<<f.mileage<<"Kmpl\n";
    cout<<"Price: "<<f.price<<"Rupees\n";
    break;
}

    
    return 0;
}