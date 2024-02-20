#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"NUM1: ";
    cin>>num1;
    cout<<"NUM2: ";
    cin>>num2;
    try
    {
        if(num2==0)
        {
            throw 1;
            
        }else{
            throw 'x';
        }
    }
    catch(int){
        cout<<"NUMBER FORMAT EXCEPTION! \n should be positive number";
    }
    catch(char){
        cout<<"NUMBER FORMAT EXCEPTION! \n character is not allowed";
    }
    return 0;
}