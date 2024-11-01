#include<iostream>
using namespace std;

class A 
{
    protected:
    int a:
    void set()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
};

class B 
{
    protected:
    int b;
    void set()
    {
        cout<<"enter the value "<<endl;
        cin>>b;
    }
};

class c : public A, public B 
{
    public:
    int c;
    void sum()
    {
        A :: set();
        B :: set();
        c = a+b;
        cout<< " sum= "<<endl;
    }
};
int main()
{
    c ob;
    ob.sum();
    return 0;
}