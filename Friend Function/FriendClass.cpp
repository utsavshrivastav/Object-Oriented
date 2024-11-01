// FRIEND CLASS IS ALSO USED TO ACCESS PRIVATE DATA MEMBER OF ANY CLASS.
// FRIEND CLASS IS DECLEARED BY FRIND KEY WORD.

#include<iostream>
using namespace std;

class A
{
    int a;
    friend class B;
}
class B
{
    public:
    void show(A ob)
    {
        ob.a = 10;
        cout<<"value of a = "<<ob.a<<endl;
    }
};
int main()
{
    A.ob;
    B.obj;
    obj.show(ob);
    return 0;
}