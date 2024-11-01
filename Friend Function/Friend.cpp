// FRIEND FUNCTION IN TWO CLASSES

#include<iostream>
using namespace std;
class B; //FORWORD DECLARATION

class A
{
 int a;
 public:
 void set()
 {
    cout<<"enter the value of a"<<endl;
    cin>>a;
 }
 friend void max(A ob , B obj);
};
class B
{
    int b;
    public:
    void set()
    {
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    friend void max(A ob, B obj)
};

void max(A ob , B obj)
{
    if(ob.a>obj.b)
    {
        cout<<"a is max";
    }
    else if(ob.b > ob.a)
    {
        cout<<"b is max";
    }
    else{
        cout<<"a and b are equal";
    }
}
int main()
{
    A.ob;
    B.obj;
    ob.set();
    obj.set();
    max(ob , obj);
}
