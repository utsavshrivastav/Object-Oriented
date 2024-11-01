        // set(w) (width) manipulator

        #include<iostream>
        #include<iomanip>
        using namespace std;

        int main()
        {
            int bs = 100000;
            int ta = 10000;
            int da = 20000;
            int gs = 130000;

            cout<<setw(3)<<"bs"<<setw(7)<<bs<<endl;
            cout<<setw(3)<<"ta"<<setw(7)<<ta<<endl;
            cout<<setw(3)<<"da"<<setw(7)<<da<<endl;
            cout<<setw(3)<<"gs"<<setw(7)<<gs<<endl;
        }