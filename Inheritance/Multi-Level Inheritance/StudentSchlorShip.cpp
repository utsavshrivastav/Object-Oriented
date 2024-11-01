//student marks profile using multi - level Inheritance

#include<iostream>
using namespace std;

class marks
{
public:
double per;
double getMethod(double c , double java , double sw , double dbms , double os)
{
    per = (c+java+sw+dbms+os)/5;
    return per;
}
};

class result : public marks
{
    public:
    double c,java,sw,dbms,os,p;
    int grade;
    void setmarks()
    {
        cout<<"enter the marks of c,java,sw,dbms,os"<<endl;
        cin>>c>>java>>sw>>dbms>>os;
        p = getMethod(c,java,sw,dbms,os);//ider error show kr raha tha , maine getMethod  likhne ki jagah pe getmarks likh diya tha.

    }
    void cal()
    {
        setmarks();
        if(p>=0 && p<33)
        {
            grade = 0;
        }
        else if (p>=33 && p<55)
        {
            grade = 3;
        }
        else if(p>=45 && p<60)
        {
            grade = 2;
        }
        else if(p>=60 && p<100)
        {
            grade = 1;
        }
    }
};

class student : public result 
{
    public:
    void scholarship()
    {
        cal();
        if(grade == 1)
        {
            cout<<"You get 70% scholorship" <<endl;
        }
        else if (grade == 2)
        {
            cout<<"you get 40% scholorship "<<endl;
        }
        else if(grade==3)
        {
            cout<<"you get 10% scholorship "<<endl;
        }
        else{
            cout<<"don't get schlorship"<<endl;
        }
    }
};
int main()
{
    student ob;
    ob.scholarship();
    return 0;
}


