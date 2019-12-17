/**
 * @file my_functions.cpp
 * @author Adam G.
 * @brief Calculate the sum of two numbers
 * @version 0.1
 * @date 2019-12-17
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include "my_functions.h"

/**
 * @brief Get the Sum object
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int GetSum(int num1, int num2)
{
  return num1 + num2;
}

char GetOperator()
{
  return '+';
}

/**
 * @brief increment step by one.
 * This is an example of pass by address rather
 * than by value. If the perameter did not
 * have the '&' it would make a copy.
 * 
 * @param step
 */
void UpdateStep(int &step) 
{                           
    cout << "Current Step: " << step << endl;
    step++;
    cout << "New step " << step << endl;
}

int Max2(int num1, int num2)
{

}

int Max3(int num1, int num2, int num3)
{

}

int Max10(const array<int,10>& nums)
{
  int max = nums[0];
  for (auto num : nums)
  {
    if (max <= num)
    {
      max = num;
    }
  }
}

/**
 * @brief change each temp one by one.
 * 
 * @param nums 
 */
void ClearElements(array<int,10> &nums)
{
  for (int index = 0; index < nums.size(); ++index)
  {
    nums[index] = -99;
  }
}
