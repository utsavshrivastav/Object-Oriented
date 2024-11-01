   //  *** ------ VIRTUAL BASES CLASS  -------***

   /*
   Whenever we perform INHERITANCE  in diamand style , there may be a chance of ambiguity that base class(parent class)
   memeber may be created duplicate copy in child class to create only single copy in child class , we create base clase
   as virtual base  class by adding virtual key world before inheriting the base classs.
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
        a = 10;
        b = 20;
    }

  };

  class B : virtual public A 
  {
    protected:
    int c;

    public:
    void add()
    {
        c = a+b;
    }
  };

  class C : virtual public A 
  {
    protected:
    int d;
    
    public:
    void multiply()
    {
        d = a*b;

    }
  };

  class D : public B , public C 
  {
    public:
    void show()
    {
        cout<<"sum of a,b= "<< a << endl;
        cout<<"multiply of a , b = "<<c<<endl;
    }
  };

  int main()
  {
    D ob;
    ob.set();
    ob.add();
    ob.multiply();
    ob.show();
    return 0;
  }
  
  