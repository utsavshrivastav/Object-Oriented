//  in multi level inheritance ,more than one level of inheritance is performed.

#include<iostream>
using namespace std;

class A 
{
    protected:
    int a,b;
    public:
    void set()
    {
        cout<<"enter the value of a and b";
        cin>>a>>b;
    }
};
class B : public A 
{
    protected:
    int d;
    public:
    void sum()
    {
        d = a+b;
    }
};

class c : public B 
{
    public:
    void show()
    {
        
    cout<<"sum = "<< d <<endl;
    }
};

int main()
{
    c ob;
    ob.set();
    ob.sum();
    ob.show();
    return 0;
}