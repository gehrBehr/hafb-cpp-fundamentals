#include "distance.h"


// Main Function
int main() 
{

 // Distance commute(5586, 25);
  //commute.ShowDist();

  Distance d1(10,6);
  Distance d2(10,6);
  Distance d3;

  d3 = d1 + d2;

  std::cout << d3 << std::endl;

  return 0;
}