/*
               ********* virtual function ************
        1. A c++ virtual function is a member function in base class that we RE-EFINE  in derived class.
        2. it is DECLEARED using virtual keyword .
        3. it is used to tell compiler to perform dynamic linkage or lead overriding binding on the function .

        4.  when the function is made virtual c++ determine which is to envoke (call) at runtime based on the 
                   type of object pointed by base class pointer.


                   *** RULE FOR VIRTUAL FUNCTION ***

      1. Virtual function must be member of base class.
      2. virtual function cannot be static.
      3. the prototype of vitual function of base class and derived class must be identical.  (imp)     
*/

#include <iostream>
using namespace std;

class p
{
    int x;
    public:
    virtual void show()
    {
        x = 5;
        cout<< " Super class x = " << x << endl;
    }
};

class c : public p
{
    int x;
    public:
    void show()
    {
        x = 10;
        cout<<"sub class x = " << x << endl;
    }
};

int main()
{
    p *ptr;
    c ob;
    ptr = &ob;
    ptr->show();
    p obj;
    ptr = &obj;
    ptr ->show();
    return 0;
}