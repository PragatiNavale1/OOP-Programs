#include<iostream>
using namespace std;
int main()
 {	
 	int size,i; 
	int *ptr; 	
	cout<<"Enter size of Array : "; 	
	cin>>size; 
	ptr = new int[size];   //Creating memory at run-time 
	for(i=0;i<size;i++) 
	{ 
		cout<<"Enter any number : "; 
		cin>>ptr[i]; 
	}
 	for(i=0;i<size;i++) 
		 cout<<ptr[i]<<"\t\n"; 
		 delete[] ptr;       //deallocating memory


    return 0;
}    