   //     ***------ PRIVATE TYPE INHERITANCE ----****
   /*
   When we perform private type of inheritance then public and protected memeber of parent class treated 
   as private in child class.
    
    - >  this can also be Accesiable through public methods


   */

  #include<iostream>
  using namespace std;
  

  class A 
  {
    private:
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
    cout<<" value of a = "<< a << endl;
  }

  int main()
  {
    B.ob;
    ob.show();
    return 0;
  }

