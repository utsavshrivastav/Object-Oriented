
 //   ******** related to program index.cpp *******

 #include<iostream>
 #include "Index.cpp"

 using namespace std;
 using namespace mn;

 int main()
 {
    float a , b , c;
    cout<<"enter the value of a, b" << endl;
    cin>> a >> b;
    c = mean(a ,b);
    cout<<"mean =" << c << endl;
 }
