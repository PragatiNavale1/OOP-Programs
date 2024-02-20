
//write c++ program using STL map for mapping person record (name, telephone no ) perform operations - add, display, search, delete, update.
#include <iostream>
#include <string>
#include <cstdlib>
#include <map>
using namespace std;
int main(){
   
    map<int, string> mp;
    map<int, string>::iterator itr;
    int choice,tel_no,n;
    string name,new_name;
    
    while(true)
    {
    cout<<"Map implementation in STL\n";
    cout<<"1. Insert Element into the Map.\n";
    cout<<"2. Display the Map Elements.\n";
    cout<<"3. Search Element at a Key in Map.\n";
    cout<<"4. Delete Element of the Map.\n";
    cout<<"5. Update the value of given key:\n";
    cout<<"6. Exit\n\n";
    cout<<"Enter your choice :\n";
    cin>>choice;
  
    switch(choice)
    {
    case 1:
    cout<<"Enter the key :\n";
    cin>>tel_no;
    cout<<"Enter the value to be inserted :\n";
    cin>>name;
    mp.insert(pair<int, string>(tel_no, name));
    break;
    
    
    case 2:
    for( itr = mp.begin(); itr != mp.end(); ++itr)
    {
    cout << "Key => " << itr->first << ", Value => " << itr->second << endl;      
    }  
    break;
    
    
    case 3:
    cout<<"Enter the key at which value to be found :\n";
    cin>>tel_no;
    cout<<mp.find(tel_no)->second<<endl; 
    break;
    
    
    case 4:
    cout<<"Enter the mapped string to be deleted: ";
    cin>>tel_no;
    mp.erase(tel_no);
    break;
   
   
    case 5:
    cout<<"Enter the key whose value you want to update :";
    cin>>n;
    itr = mp.find(n);
    if (itr != mp.end())
    cout<<"Enter new value :";
    cin>>new_name;
    itr->second = new_name;
    cout<<"Map after updation :\n";
    for( itr = mp.begin(); itr != mp.end(); ++itr)
    {
    cout << "Key => " << itr->first << ", Value => " << itr->second << endl;      
    } 
    break;
    
     
    case 6:
    exit(1);
    break;
    
    
    default:
    cout<<"Wrong Choice!!";
    break;
    }
    }
    return 0;
}
