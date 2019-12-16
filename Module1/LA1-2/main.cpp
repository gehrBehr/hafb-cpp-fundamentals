/**
 * @file main.cpp
 * @author Adam G.
 * @brief Global vs Local variables
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

int globalVar = 1000;

int main()
{
    int globalVar = 2000;
    cout << "Local " << globalVar << endl;
    cout << "Global " << ::globalVar << endl;

    return 0;
}