#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int age = 0; //int: signed integers
    std::cout << "\nHello there!" << endl;
    std::cout << "\nWhat is your age?" << endl;
    cout << "> ";
    cin >> age;

    cout << "Ahh, you are " << age << ". Very neat.\n" << endl;

    return 0;
}