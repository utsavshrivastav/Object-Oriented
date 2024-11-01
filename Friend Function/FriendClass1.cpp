// friend class also acess private member function of class.

#include<iostream>
using namespace std;

class A 
{
    int a:
    void set()
    {
      a = 10;
    }
    friend class B;
};
class B
{
    public:
    void show(a.ob)
    {
        ob.set();
        cout<<"value of a = "<<ob.a<<endl;
    }
};
int main()
{
    A ob;
    B obj;
    obj show(ob);
    return 0;
}