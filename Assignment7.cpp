#include<iostream>
using namespace std;

class Except
{
	public:
	int i,array[5],ele;
	float num1,num2;	
	
	void Take(){
		
		cout<<"Eneter Array Element: "<<endl;
	
		for(i=0;i<5;i++)
		{
			cin>>array[i];
		}
		
		cout<<"Enter Num1: ";
		cin>>num1;
		cout<<"Enter Num2: ";
		cin>>num2;
			
	}
	
	void Exception1()
	{
		cout<<"***Access Array Element***"<<endl;
		cout<<"Enter Element to access: "<<endl;
		cin>>i;
		try
		{
			if(i<5)
			{
				cout<<"Array element present at "<<i<<" is "<<array[i];
			}
			else
			{
				throw 1;
			}
		}
		catch(int)
		{
			cout<<"ArrayIndexedBoundException !!"<<endl;
		}
	}
	
	void Exception2()
	{
		try
		{
			if(num2==0)
			{
				throw 1;
			}
		}
		catch(int)
			{
				cout<<"NumberFormatException !!"<<endl;
			}
			try
			{
				if(num1!=(int)num1 && num2!=(int)num2)
				{
					cout<<"Num1/num2= "<<num1/num2<<endl;
				}
				else
				{
					throw 2;
					
				}
			}
			catch(int)
			{
				cout<<"NumberFormatException !!"<<endl;
			}
		}	
};

int main()
{
	Except ex;
	ex.Take();
	ex.Exception1();
	ex.Exception2();
	
	return 0;
}
