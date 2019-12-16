/**
 * @file age.cpp
 * @author Adam G.
 * @brief Print user rights based on age.
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
    int age = -1;
    while (age != 0)
    {
        cout << "Enter your age: ";
        cin >> age;
        //display rights by age.
        /* if you are under 18 you must go to school
        * if you are over 18 you can vote
        * if you are over 21, you can buy alcohol
        *    if you are over 65 you can retire
        * ***/
        if (age < 18)
        {
            cout << "You should be in school" << endl;
        }
        else if (age >= 18 && age < 21)
        {
            cout << "you can vote." << endl;
        }
        else if (age >= 21 && age < 65)
        {
            cout << "You can buy alcohol" << endl;
        }
        else if (age >= 65)
        {
            cout << "you can retire." << endl;
        }
    }

    return 0;
}