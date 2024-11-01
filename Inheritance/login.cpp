

           //single level inheritance

           #include<iostream>
           #include<string.h>
           using namespace std;

           class login
           {
            protected:
            char u[20],p[20];
            int flag;
            public:
            login()
            {
                strcpy(u,"admin");
                strcpy(p,"pass123");
                flag=0;
            }
            int checklogin(char user[20],char pass[20])
            {
                if(!((strcmp(u,user))&&(strcmp(p,pass))))
                {
                    flag = 1;
                }
                return flag;
            }
           };

           class bank : public login
           {
            int bal,amt,ch,f;
            protected:
            char us[20], ps[20];
            public:
            bank()
            {
                bal=5000;
            }
            void deposit()
            {
                cout<<"enter the amount"<<endl;
                cin>>amt;
                if(amt>0)
                {
                    cout<<"amount deposited"<<amt<<endl;
                    bal=bal+amt;
                    cout<<"total balance ="<<bal<<endl;
                }
                else
                {
                    cout<<"invalid amount";
                }
            }
            void withdrawal()
            {
                cout<<"enter the amount"<<endl;
                cin>>amt;
                if(amt>0 && amt<=bal)
                {
                    cout<<"amount withdrawal = "<<amt<<endl;
                    bal=bal-amt;
                    cout<<"total balance= "<<bal<<endl;
                }
                else{
                    cout<<"invalid amount";
                }
            }
            void menu()
            {
                cout<<"enter the username "<<endl;
                cin>>us;
                cout<<"enter the password "<<endl;
                cin>>ps;
                f=checklogin(us,ps);
                if(f==1)
                {
                    cout<<"press 1 for deposit"<<endl;
                    cout<<"press 2 for withdrawal"<<endl;
                    cout<<"press 3 for show balance"<<endl;
                    cin>>ch;
                    switch(ch)
                    {
                        case 1:
                        deposit();
                        break;

                        case 2:
                        withdrawal();
                        break;

                        case 3:
                        menu();
                        break;

                        default:
                        cout<<"invalid choice"<<endl;



                    }
                }
                else
                {
                    cout<<"Invalid username & password"<<endl;
                }
            }
           };
           int main()
           {
            bank ob;
            ob.menu();
            return 0;
           }