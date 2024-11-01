/*       *******   FILE HANDLING   ********
    -> If we want to store record in the file then we can use file handling technologiees.
    -> In C++ , to perform read or write operation . we include a library called <fstream>.

    Data type                                Description 

    <fstream>                             it is used to CREATE file , WRITE information to file , READ information from files 

    <ifstream>                             it is ussed for READ INFORMATION from files.

    <ofstream>                              it is used to CREATE or WRITE information
*/


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout("A.text"); //abhi ek file banaya/create kra apn ne . 'A' naam se
    if(fout.is_open())
    {
        fout << "Welcome to File";    //abi apn kuch changes krne ki kossis karenge toh koi changes occur nhi hogi .
        fout.close();                           // file ka naam bhi change nhii kr sakte ek baar compile ho gya program toh
    }
}