#include<iostream>
using namespace std;
class shape
{
	public:
	double l,b;
	void getdata()
	{
		cout<<"Enter Length: ";
		cin>>l;
		cout<<"Enter Breadth: ";
		cin>>b;
	}
	virtual void display_area()=0;  //USING PURE VIRTUAL FUNCTION
	
};

class triangle:public shape
{
	public:
	void display_area()
	{
		double area=0.5*l*b;
		cout<<"Area of Triangle: "<<area<<endl;
	}
};


class rectangle:public shape
{
	public:
	void display_area()
	{
		double area=l*b;
		cout<<"Area of Rectangle: "<<area;
	}
};
int main()
{
	int choice;
	for(int i=0;i<2;i++)
	{
		cout<<"\n **********CHOOSE A SHAPE********";
		cout<<"\n 1. TRIANGLE";
		cout<<"\n 2. RECTANGLE\n";
		cin>>choice;
		if(choice==1)
		{
			//triangle t;
			//t.getdata();
			//t.display_area();
			
			triangle t;
			shape *sh=&t;
			sh->getdata();
			sh->display_area();
		}
		else if(choice==2)
		{
			//rectangle r;
			//r.getdata();
			//r.display_area();
			rectangle r;
			shape *sh=&r;
			sh->getdata();
			sh->display_area();
		}
		else
		{
			cout<<"INVALID CHOICE";
		}
		
	}
	return 0;
}

