              //Code to Read Multiple Lines.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream inf; 
    string name;
    inf.open("A.text",ios::in);
    while(getline(inf , name))
    {
        cout<< name <<endl;
    }
    inf.close(); 
}