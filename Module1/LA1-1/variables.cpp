#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    bool statement = false;

    cout << "Data Type "  << setw(8) << "Bytes\n"
         << "--------- " << setw(8) <<  "------\n"
         << "int  " << setw(9) << sizeof(int) << endl //integers
         << "char " << setw(9) << sizeof(char) << endl //characters 1
         << "long " << setw(9) << sizeof(long) << endl // long integers
         << "bool " << setw(9) << sizeof(bool) << endl; //boolean

         


    return 0;
}