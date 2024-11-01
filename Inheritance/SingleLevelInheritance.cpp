/*
class p
{
     --- code --
}

class c: public p
{
    --code--
}
*/

     // ** object hemesa he child class ki hogi 

     #include<iostream>
     using namespace std;

      class p
      {
        protected:
        int a,b;
        public:
        void set()
        {
            cout<<"enter the value of a and b";
            cin>>a>>b;
        }
        };
        class c : public p 
        {
            int d;
            public:
            void sum()
            {
                set();
                d = a+b;
                cout<<"sum"<<d<<endl;
            }
        };
         int main()
        {
            c ob;
            ob.sum();
            return 0;
        }
        