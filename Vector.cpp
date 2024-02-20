#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
vector<int> dq;
vector<int>::iterator it;
int choice, item;
while (1)
{
cout<<"\n---------------------"<<endl;
cout<<"Deque Implementation in Stl"<<endl;
cout<<"\n---------------------"<<endl;
cout<<"1.Insert Element at the End"<<endl;

cout<<"3.Delete Element at the End"<<endl;

cout<<"5.Front Element at Deque"<<endl;
cout<<"6.Last Element at Deque"<<endl;
cout<<"7.Size of the Deque"<<endl;
cout<<"8.Display Deque"<<endl;
cout<<"9.Exit"<<endl;
cout<<"Enter your Choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter value to be inserted at the end: ";
cin>>item;
dq.push_back(item);
break;

case 3:

dq.pop_back();
cout<<"Element "<<item<<" deleted";
break;

case 5:
cout<<"Front Element of the Deque: ";
cout<<dq.front();
break;
case 6:
cout<<"Back Element of the Deque: ";
cout<<dq.back();
break;
case 7:
cout<<"Size of the Deque: "<<dq.size();
break;
case 8:
cout<<"Elements of Deque: ";
for (it = dq.begin();
it != dq.end(); it++)
cout<<*it<<" ";
cout<<endl;
break;
case 9:
exit(1);
break;
default:
cout<<"Wrong Choice";
}
}
return 0;
}
