#include<iostream>
using namespace std;

class bank{
public:
int acc_no,bal,deposit,withdraw;
char name[20];
char acc_type[20];
public:

void detail(){
cout<<"Enter your details :";
cout<<endl<<endl;
cout<<"NAME :\n";
cin>>name;
cout<<"ACCONT NO :\n";
cin>>acc_no;
cout<<"ACCONT TYPE :\n";
cin>>acc_type;
cout<<"Enter opening balance: ";
cin>>bal;

}

void deposit1(){
cout<<"Enter amount to deposit : \n";
cin>>deposit;
bal=bal+deposit;
cout<<"Total balance after deposition : \n";
cout<<bal;
}

void withdraw1(){
cout<<"Enter amount to withdraw : \n";
cin>>withdraw;
bal=bal-withdraw;
cout<<"Total balance after withdrawing the amount : \n";
cout<<bal;
}

void display(){
cout<<"Your details are :"<<endl<<endl;
cout<<"NAME :"<<name<<endl;
cout<<"ACCOUNT NO :"<<acc_no<<endl;
cout<<"ACCOUNT TYPE :"<<acc_type<<endl;
cout<<"TOTAL BALANCE :"<<bal<<endl;
}
};

int main(){
int i=0;
int choice;
do{

cout<<"\nCHOICE FROM BELOW:"<<endl<<endl;
cout<<"1.Enter your details."<<endl;
cout<<"2.Deposit amount."<<endl;
cout<<"3.Withdraw amount."<<endl;
cout<<"4.Display your details."<<endl;
cout<<"5.Exit.";
cin>>choice;
i++;

bank b;
switch(choice){
case 1: b.detail();
break;
case 2: b.deposit1();
break;
case 3: b.withdraw1();
break;
case 4: b.display();
break;

}
}while(i<5);
return 0;
}
