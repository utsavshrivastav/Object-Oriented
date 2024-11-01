/*
     imp -> templete type ka variable decleare karte hain.

     1. A c++ templete is a powerful feature add to c++ , it allow you to define GENERIC CLASS & GENERIC FUNCTIONS .
                so by the use of Templete We can perform Generic Programming.

         2. In C++ Templete can be represent in two ways - 

         a. Functional Templete
         b. Class - Templete 


                *******  FUNCTIONAL TEMPLETE *******
                Q ->  How to Create Templete 
                              or
                     Templete ko baante kise hain :-

                  <syntax>   templete < variable name >     
                          ex - templete < class T > , etc

         ** note -- Templete  type ka  "DATA-TYPE"  banawoge  . then they consider all the data-type Simultaneously
                        indiviudally kisi bhi variable ko int , float , char ,etc dene ki jarurat nhi hain .

*/


#include<iostream>
using namespace std;

template<class T>        //functional templete

void show(Ta , Tb)
{
    cout<<"value of a ="<< a <<endl;
    cout<<"value of b=" << b << endl;
}
int main()
{
    show(2,3);
    show(3.5 , 6.7);
    show ('a' , 't');
};  //not REQUIRED to tell , a data type is float , int or char in C++ Templete.
