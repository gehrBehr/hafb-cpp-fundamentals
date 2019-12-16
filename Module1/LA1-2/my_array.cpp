/**
 * @file my_array.cpp
 * @author Adam G.
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iomanip>
#include <iostream>
using namespace std;

const int kMaxExams = 5;
const int k2D_RowSize = 3;
const int k2D_ColumnSize = 5;

int main()
{
    //int grades[kMaxExams]; // an array of 5 integers
    //int grades[kMaxExams] = {90, 80, 70, 60, 50}; // an array of 5 integers assigned
    int grades[] = {90, 80, 70, 60, 50}; // an array of 5 integers, initialized by compiler
    cout << "Enter your exam scores." << endl;
    
    int sum = 0;
    for (int index = 0; index < kMaxExams; ++index)
    {
        // cout << "Enter exam " << index + 1 << "'s score: ";
        // cin >> grades[index]; //access each element
        sum += grades[index];
    }
    //cast the variable type to preseve floating point
    //int uses less resources, and so casting solves that.
    float average = ( static_cast<float>(sum) / kMaxExams);
    cout << "Your average is: " << average << endl;

    //2D arrays: type name[row][column]
    int biArray[k2D_RowSize][k2D_ColumnSize] =
    {
        {4,2,5,6,8},
        {1,0,1,0,1},
        {54,65,78,37,19}
    };

    for (int row = 0; row < k2D_RowSize; ++row)
    {
        for (int column = 0; column < k2D_ColumnSize; ++column)
        {
            cout << "Array element at [" << row << "]"
            << "[" << column << "] is:  " << biArray[row][column] << endl;
        }
    cout << endl;
    }
    return 0;
}