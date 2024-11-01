/*
         *** NAMESPACE ***********

      1. namespace in c++ is the space , where we can define or declare identifier ie.. variable , method or classes.

      2. namespace ke through alag-alag functionality bana sakte ho.

      3. khud ke bhi "namespace" create kar sakte hain apn (ie.. std, etc.)   
*/

#include<iostream>
using namespace std;

namespace demo      //khud ka namespace create kra hain
{
     void function()
     {
        cout << "welcome" <<endl;
     }
};

namespace demo1        // Ek aur namespace banaya khud se
{
     void function()
     {
         cout<<"bye" <<endl;
     }
}

//using namespace demo
//using namespace demo1

int main()
{       //using SCOPE RESOLUTION  -> to call the function  , if the function name will be same.
    demo :: function();
    demo1 :: function();
}

