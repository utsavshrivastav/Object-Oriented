  /*
           ******* ------ ABSTRACT CLASS ------- *********

           1. PURE VIRTUAL CLASS  is used to Achieve abstraction
           2. a class have pure virtual function is called abstract class.
           3. a pure virtual function can be CREATE by using VIRTUAL KEYWORD & its implementation cannot create ib base class.
                        its implementation always create an derived class.
           4. if a derived class cannot provide implementation of pure virtual function then derived class also became
                       Abstract class

           5. Abstract class also have CONSTRUCTOR.

           6. a class is called Abstract class , if they have one pure Virtual function.
           ie....
                      class p
                      {
                        virtual void method ka naam ()
                          ex-
                          virtual void area() = 0  -> pure virtual me eual to zzero hoga tabi PURE VIRTUAL FUNCTION KEHANGE.
                      }

                      class rectangle : public p
                      {
                        void area()
                        {

                        }
                      };

                      class circle : public p
                      {
                        void area()
                        {

                        }
                      };


        note - 1  PURE VIRTUAL FUNCTION ka implementation child class me hoga. 
                                 or,
                 pure virtual fn ka implemntation nicche hota hain .

        note - 2  pure virtual function  kevel METHOD NAME ki detail provide krta hain .
                           aur uska implementaion child class me hoti hain 
                            ye concept hain pure virtual funnction ki .                                

                                   
  */

 #include<iostream>
 #include<iomanip>
 using namespace std;

 class p
 {
  public:
  virtual void area()=0;
 }
 


 class rect : public p
 {
  float pi , r , a:

  void set()
  {
    pi = 3.14;
    cout<<"enter the value of r";
    cin>>r;
  }
  void area()
  {
    a = pi*r*r;
    cout<<"area of circle = " << a << endl;
  }
 };
 int main()
 {
  rect ob;
  ob.set();
  ob.area();
  return 0;
 }
 
