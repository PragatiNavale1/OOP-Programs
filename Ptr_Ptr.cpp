#include <iostream> 
using namespace std; 
int main () 
{ 
	int var; 
	int *ptr; 
	int **pptr; 
	var = 3000; 
	ptr = &var; // take address of var in ptr
	pptr = &ptr; // take address of ptr in pptr 
	
	cout << "Value of var :" << var;
 	cout << "Value available at *ptr :" << *ptr; 
	cout << "Value available at **pptr :" << **pptr;
    return 0;
}
