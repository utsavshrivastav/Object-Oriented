#include<iostream>
using namespace std;

class A 
{
    //protected:
    public:
    int a;
    void set()
    {
        cout<<"enter the value of a";
        cin>>a;
    }
};

class B
{
    //protected:
    public:
    int b;
    void set()
    {
        cout<<"Enter the value of b";
        cin>>b;

    }
};

class c : public A ,public B
{
    //protected:
    public:
    int c;
    void sum()
    {
        c= a+b;
        cout<<" sum = "<<c<<endl;
    }
};
int main()
{
    c ob;
    ob.A :: set();
    ob.B :: set();
    ob.sum();
    return 0;
}