     /*
                  TEMPLETE FUNCTION KO Overload bhi kr skate ho; ie.. called "Templete Overloding".

                Templete Overloding ->  jab Templete function ke saath koi aur dushre function bhi rehta he 
                                              toh usse "templete overloding".  
     */

    #include<iostream>
    using namespace std;

    template <class T>

    

         void show(Ta , Tb)    //templete variable
    {
        cout<<"value a in templete function= "<< a << endl;
        cout<<"value of b in templete function = "<< b << endl;
    }
     
 
    void show(int a , int b)   //integer type variable
    {
        cout<< "value of a in normal function = " << a << endl;
        cout<<"value of b in normal function = " << b << endl;
    }

    int main()
    {
        A.ob;
        show(2.5 , 3.5);
        show(3 , 6);
        show('a' , 't');
    }; //not compile 