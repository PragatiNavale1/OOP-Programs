#include<iostream>
using namespace std;

class matrix
{
	public:
	int a,b,c,d;
	int m1[10][10];
	int m2[10][10];
	int m3[10][10];
	void read()
	{
		cout<<"Enter number of rows for matix 1 :";
		cin>>a;
		cout<<"Enter number of cols for matix 1:";
		cin>>b;
		cout<<"Enter number of rows for matix 2:";
		cin>>c;
		cout<<"Enter number of cols for matix 2:";
		cin>>d;
		
		try
		{
			if((a>10)||(b>10))
			{
				throw 1;
			}
		}
		catch(int)
		{
			cout<<"No. of rows and columns can't be more than 10!!";
			return;
		}	
		try
		{
			if(c>10 ||d>10)
			{
				throw 1;
			}
		}
		catch(int)
		{
			cout<<"No. of rows and columns can't be more than 10!!";
		}
		cout<<"Enter values of Matrix 1 :"<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>m1[i][j];
			}
		}
		cout<<"Enter values of Matrix 2 :"<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>m2[i][j];
			}
		}	
		
		
		if((a==c)&&(b==d)){
			cout<<"\nAddition of Matrices is :"<<endl;
			for( int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
					cout<<m1[i][j]+m2[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<"\nSubstraction of Matrices is :"<<endl;
			for( int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
					cout<<m1[i][j]-m2[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			try
			{
				throw 1;	
			}
			catch(int)
			{
				cout<<"Due to order mismatch couldn't perform addtion and substraction!!";
			}
			
		}
		
		
		if(b==c)
		{
			
			for( int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
					m3[i][j]=0;
					for(int k=0;k<c;k++)
					{				
						m3[i][j]+= m1[i][k] * m2[k][j];
					}
				}
				cout<<endl;
			}
			cout<<"\nMultiplication of Matrices is :"<<endl;
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<b;j++)
				{
					cout<<m3[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			try
			{
				throw 1;
								
			}
			catch(int)
			{
				cout<<"Due to order mismatch couldn't perform multiplication!!";
			}
		}
}
};		
int main()
{
	matrix m;
	m.read();
	return 0;
}
		
