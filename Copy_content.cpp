#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");
    string content;
    while(infile.eof()==0)
    {
        getline(infile,content);
        cout<<content<<endl;

    }
    infile.close();
    outfile.close();
    return 0;


}