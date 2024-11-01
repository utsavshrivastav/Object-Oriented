// PROTECTED TYPE INHERITANCE
/*
when we perform protected type inheritance then public and protected data of parent class 
always treat protected in child class.

- >  Protected method can be called through public methods.
*/

#include<iostream>
using namespace std;

class A 
{
    protected:
    int a;
    
    public:
    void set()
    {
        a = 10;
    }
};
class B : protected A 
{
    set();
    cout<<"value of a = "<< a << endl;
}

int main()
{
    B ob;
    ob show();
    return 0;
}
