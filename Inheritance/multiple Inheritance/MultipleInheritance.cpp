#include<iostream>
using namespace std;

class A 
{
    protected:
    int a;

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

    void set1()
    {
        cout<<"enter the value of b";
        cin>>b;
        }
 };

class c : public A , public B
{
public: //chnages kra yeah pe phle protected tha error show kr rha tha the public kra mine toh compile  ho gya.
int c;
void sum()
{
    set();
    set1();
    c=a+b;
    cout<<"sum= "<<c<<endl;
}
};
int main()
{
    c ob;
    ob.sum();
}
