#include<iostream>
#include<cstring>
using namespace std;  
class books{
    public:
        char title[50],tt[50];
        char author[50];
        char publisher[10];
        int price=0;
        int stock=0;
        int val;
        
        void getdata()
        {
                cout<<"\nEnter Title: ";
                cin>>title;
                cout<<"\nEnter Author Name: ";
                cin>>author;
                cout<<"\nEnter publisher: ";
                cin>>publisher;
                cout<<"\nEnter price: ";
                cin>>price;
                cout<<"\nEnter stock: ";
                cin>>stock;
        }
        
        void display()
        {
                cout<<"\nTitle Name: "<<title;
                cout<<"\nAuthor Name: "<<author;
                cout<<"\nPublisher Name: "<<publisher;
                cout<<"\nPrice: "<<price;
                cout<<"\nStock available: "<<stock<<endl;

        }
        
        int search(char title_s[50])
        {
              if(strcmp(title,title_s)==0)
                return 1;
              else
                return 0;

        }
        void buy(){
                int no_of_copies;
                cout<<"\nEnter no. of copies required:";
                cin>>no_of_copies;
                if(no_of_copies <= stock)
                {
                        cout<<"Number of entered copies is available"<<endl;
                        cout<<"\nPrice of "<< no_of_copies <<"  books is : RS."<<no_of_copies*price;
                        cout<<"\nThank you .... Visit again....\n";
                }
                else
                {
                        cout<<"\nRequired copies are not available...\n"  ;
                        cout<<"\nSorry for inconvinience...\n";
                        cout<<"\nThank you .... Visit again....\n";
                }
        }
};
int main()
{

        int n,ch;
        char title_s[50];
        int val=0;
        char a;
        books b[n];
        cout<<"Enter the num of books to enter :\n";
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
                cout<<"Enter details of book"<<i+1;
                b[i].getdata();
        }
 
        do{
                cout<<"*****MENU****\n";
                cout<<"1.Display the entered book Data\n2.Search a Book\n3.Buy a Book"<<endl;
                cout<<"Enter your choice:";
                cin>>ch;
        switch(ch)
        {
                case 1:
                for(int i=0;i<n;i++)
                {
                        cout<<"---------------------------------\n";
                        cout<<"Details of book  "<<i+1<<"  is ";
                        b[i].display();
                }
                break;
                
                
                case 2:
                cout<<"\nEnter Book title to search : ";
                cin>>title_s;
                        
                //searching if it is avaliable in shop
                 for(int i=0;i<n;i++)
                {
                        val=b[i].search(title_s);
                        if(val==1)
                        {
                                cout<<"\nBook is found\n";
                        }
                }
                if(val==0)
                {
                        cout<<"\nBook is not found\n";
                }
                break;
                case 3:
                cout<<"\nEnter Book title to buy : ";
                cin>>title_s;
                        
                //searching if it is avaliable in shop
                for(int i=0;i<n;i++)
                {
                        val=b[i].search(title_s);
                        if(val==1)
                        {
                                cout<<"\nBook is found\n";
                                b[i].buy();
                        }
                }
                if(val==0)
                {
                        cout<<"\nBook is not found\n";
                }
                break;
                                
        }
        cout<<"Do you want to continue:(Yes-y or No-n)"<<endl;
        cin>>a;
        }while(a=='y' || a=='Y');
        return 0;
}