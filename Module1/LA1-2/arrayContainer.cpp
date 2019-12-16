/**
 * @file arrayContainer.cpp
 * @author Adam G.
 * @brief using the array library.
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <array>
#include <iostream>
using namespace std;

int main()
{
//To create arrays with library:
//array<type, numberOfElements> name;
    array<double, 5> grades {22.1,60.9,11.2,99,44.3};
   cout << "Size of array: " << grades.size() << endl;
   cout << "Array empty?: " << grades.empty() << endl;
   //Loop through all elements.
   for (int i = 0; i < grades.size(); ++i)
   {
       cout << grades[i] << endl;
   }

   //For each loop (introduced in C++ 11)
   cout << "Example using For each." << endl;
   for (auto grade : grades)
   {
       cout << grade << endl;
   }
   
    return 0;
}