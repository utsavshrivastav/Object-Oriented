/*
it is a combination of multi-level and multiple Inheritance 
*/

#include<iostream>
using namespace std;

class A 
{
    protected:
    int a,b;

    public:
    void set()
    {
        cout<<"enter a and b "<<endl;
        cin>>a>>b;
    }
};

class B : class A 
{
  protected:
  int c;

  public:
  void sum()
  {
    c=a+b;
    cout<<"sum of a and b "<< c <<endl;
  }
};

class c 
{
    protected:
    int d;

    public:
    void set()
    {
        cout<<"enter the d "<<endl;
        cin>>d;
    }
};
class D : public A , public c
{
    protected:
    int e;

    public:
    void multiply()
    {
        e = a*d;
        cout<<"multip;y of c and d = "<< e <<endl;
    }
};
int main()
{
    D ob;
    ob.set();
    ob.sum();
    ob.set();
    ob.multiply();
    return 0;
}
