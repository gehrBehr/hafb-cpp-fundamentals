/**
 * @file case.cpp
 * @author Adam G.
 * @brief Multiple IF-Statement and CASE
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    char code;
    cout << "Enter the specification code: ";
    cin >> code; 
    
    // to compare values
    // if (code == 'S')
    // {
    //     cout << "the item is space exploration grade." << endl;
    // }
    // use a switch statement
    switch (code)
    {
        case 'S':
        case 's': // acts like an Or statement (||)
            cout << "the item is space exploration grade." << endl;
            break;
        case 'M':
            cout << "the item is military grade." << endl;
            break;
        case 'C':
            cout << "the item is commercial grade." << endl;
            break;
        case 'T':
            cout << "the item is toy grade." << endl;
            break;
        default:
            cout << "This item is not supported." << endl;
            break;
    }

    

    return 0;
}