/**
 * @file mySquares.cpp
 * @author Adam G.
 * @brief 
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

const int kMaxCount = 5;

int main ()
{
    cout << "NUMBER   SQUARE ROOT" << endl;
    cout << "------   -----------" << endl;
    //don't use 'i' any more
    cout << setiosflags(ios::showpoint);
    for (int count = 1; count < kMaxCount; ++count) //standard is now to do this so that
    {                                               // the variable doesn't have to reload
        cout << setw(4) << count << setw(15) << sqrt(count) << endl;
    }
    cout << "Done" << endl;
    return 0;

}