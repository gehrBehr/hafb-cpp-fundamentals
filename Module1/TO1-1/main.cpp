#include "factor.h"

// Main function
int main()
{
  unsigned int count = 0;

  FactorMod3();     // call function
  return 0;
}
// Function Definition
void FactorMod3(unsigned int currentNumber)
{
  int result;
  // algorithm

  cout << "Result is: " << result << endl;
  return;   // optional return on void functions
}

//start from 1 and go to 30
void BeginFactorization()
{
  for (unsigned int x = 1; x <= 30; ++x)
  {
    FactorMod3(x);
  }
  
}