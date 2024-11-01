      //  *********** BOOK INFORMATION *********

      #include<iostream>
      #include<fstream>
      #include<string.h>
      #include<stdio.h>
      #include<stdlib.h>

      using namespace std;

      class Book
      {
        char little[20];
        int bookid;
        int price;
        
        public:
        Book()
        {
           strcpy("title" , "no title");
           bookid = 0;
           price = 0;
        }
        void setdata()
        {
           cout<<"enter the title"<<endl;
           cin.ignore();
           cin.getline("title" , 19);
           cout<<"Enter the book id"<<endl;
           cin>>bookid;
           cout<<"enter the price "<<endl;
           cin>>price;
        }

        void storedata()
        {
            setdata()
            if(bookid == 0 && price == 0)
            {
                cout<<"unable to open file";
            }
            else
            {
                ofstream fout;
                fout.open("A.dat", ios::app || ios::binary)
                fout.write((char*)this,sizeof(*this));
                fout.close();
            }
        }

        void Viewallrecord()
        {
           cout<<"title /t/t bookid/t/t price"<<endl;
           ifstream fin;
           fin.open("A.dat" , ios::in || ios::binary);
           if(!fin)
           {
            cout<<"file not found";
           }
           else
           {
            fin.read((char*)this,sizeof(*this));
            while(!finof())
            {
                show data();
                fin.read((char*)this,sizeof(*this));
            }
        
           }
        }
        fin.close();
      }

      void searchRecord(char*t)
      {
        cout<<"title/t/t bookid/t/t price"<<endl;
        ifstream fin;
        fin.open("A.dat" , ios::in || ios::binary);
        if(!fin)
        {
            cout<<"file not found";
        }
        else
        {
            fin.read((char*)this , sizeof(*this));
            while(!fin.of())
            {
                if(!strcmp(t,title))
                {
                    show data();
                }
                fin.read((char*)this , sizeof(*this));
            }
        }
        fin.close();
      }

      void deleterecord(char*)
      {
        ifstream fin;
        ofstream fout;
        fin.open("A.dat" , ios::in || ios::binary);
        fout.open("temp.dat", ios::app || ios::binary);
        if(!fin)
        {
            cout<<"file not found";
        }
        else
        {
            fin.read((char*)this , sizeof(*this));
            while(!fin.of())
            {
                if(!strcmp(t , title))
                {
                    
                }
            }
        }
      }