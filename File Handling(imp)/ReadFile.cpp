/*       ********  file ko read kise karna hain  *********
        
           ios :: in    (read)
           ios :: out   (write)
           ios :: app   (     )
           ios :: bin   (     )
              
*/
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream inf;     //ifstream is for read from file
    string name;
    inf.open("A.text", ios::in);   
    //inf.open("utsav.text, ios::in");
    getline(inf , name);   //getline -> used -> file to read; 
    inf.close();
}