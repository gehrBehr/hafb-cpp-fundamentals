#include "factor.h"

// Main function
int main()
{
  BeginFactorization();

  return 0;
}
// Function Definition
void FactorMod3(unsigned int currentNumber)
{
 unsigned int result;
 for (unsigned int x = 1; x <= 30; ++x)
  {
    if(currentNumber % 3)
    {
      result++;
    }
  }
    

  cout << "Result is: " << result << endl;
  return;   // optional return on void functions
}

//start from 1 and go to 30
void BeginFactorization()
{  
 
  
}