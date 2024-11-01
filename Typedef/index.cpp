//TYPEdef -- it is used to create alias of datatype ie .. by using TYPE-DEF we can create new name 
// of primitive datatype.

#include<iostream>
using namespace std;
int main()
{
    typedef int no;
    no a,b,c;
    cout<<"enter the value of a,b"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl;
}
