/*
- > structure is a collection of dissimilar data type 
-> In C++ structure ,we can take datatype as well as we can create methods and constructor also 
- > struccture doesnot include private , protected , and public in the program.
*/

#include<iostream>
using namespace std;

struct student 
{
    char name[20];
    int age;
    student()  //constructor hain
    {
        strcpy(name ,"Vikita");
        age = 20;
    }
    void set()
    {
        cout<<"enter the name and age "<<endl;
        cin>>name>>age;
    }
    void show()
    {
        cout<<"name = "<< name << endl;
        cout <<"age = "<< age <<endl;
    }
};
int main()
{
    struct student ob;
    ob.show(); //constructor waala name & age show karenga

    //    user jo name & age daalenga wo show karenga.
    ob.set();
    ob.show();
    return 0;

}
