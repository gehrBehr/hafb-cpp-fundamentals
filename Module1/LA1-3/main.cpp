#include "my_functions.h"

// Main Function
int main()
{
  int number1 = 10;
  int number2 = 5;

  cout <<"The equation: " << number1 << " " << GetOperator()
  << " " << number2 << " = " << GetSum(number1,number2); //pass by value.


  cout << "\nNumber before UpdateStep(): " << number1 << endl;
  
  UpdateStep(number1); //pass by reference.

  cout << "Number after UpdateStep(): " << number1 << endl;

  array<int, 10> temperatures = {-12,34,67,0,12,44,99,-8,18,33};
  ClearElements(temperatures);

  for (auto temp : temperatures)
  {
    cout << temp << endl;
  }


  return 0;
}
