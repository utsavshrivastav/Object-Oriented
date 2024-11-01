//example of hierarichical inheritance

#include<iostream>
using namespace std;

class Rbi
{
    protected:
    float si;
    public:
    float simple(float p , float r , float t)
    {
        si = (p*r*t/100);
        return si;
    }
};

class Sbi : public Rbi
{
    protected:
    float p,r,t,s;
    public:
    void set()
    {
        r=7;
        cout<<"enter the p "<<endl;
        cin>>p;
        cout<<"enter the t "<<endl;
        cin>>t;

        s = simple(p,r,t);
        cout<<"simple Interest = "<< s <<endl;
    }
};

class Hdfc : public Rbi
{
    protected:
    float p,r,t,s;
    public:
    void set()
    {
        r=12;
        cout<<"enter p"<<endl;
        cin>>p;
        cout<<"enter t "<<endl;
        cin>>t;
        s = simple(p,r,t);
        cout<<"simple Interest ="<< s <<endl;
    }
};

int main()
{
    Sbi ob;
    ob.set();
    Hdfc obj;
    obj.set();
}

