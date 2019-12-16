/**
 * @file multi_Tables
 * @author Adam G.
 * @brief display multiplication based on user input 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int kMax = 12;

int main ()
{
   int number = 0;
   cout << "Enter a value to print multiplication tables: " << endl;
    cin >> number;

for (int row = 1; row <= number; ++row)
{
    for (int column = 1; column <= kMax; ++column)
    {
        cout << setw(6) << (row * column);
    }
    cout << endl;
}
    return 0;

}