#include <iostream>
#include <fstream>
//<fstream> ke andar he apn read and write kar skate hain .isliye fstream include kra ;

using namespace std;

int main()
{
  char name[20];
  int age; 
  int rollno;
  cout<<"enter the name ,age & roll no"<<endl;
  cin>>name>>age>>rollno;

  ofstream fout; //using ofstream ,we are allow to CREATE OR WRITE INFORMATION.
  fout.open("vicky.text", ios::out);
  fout<< name << "/t" << age <<"/t" << rollno ;
  fout.close();

  ifstream fin;
  fin.open("vicky.text", ios::in);
  fin>> name >> age >> rollno;
  cout << name << "/t" << age << "/t" <<rollno;
  fin.close();
}

