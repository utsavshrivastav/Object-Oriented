          /*
                  ****** ARRAY OF STRUCTURE *******
       structure variable array type  bhi ho skata hain .
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
    struct student ob[3]; //yeh statement yehye show karta hain "structure variable store or record three data at a time".
    int i;

    for(i = 0; i<=2; i++)
    {
        ob[i].set();
    }
    for(i=0;i<=2;i++)
    {
        ob[i].show();
    }
    return 0;

}