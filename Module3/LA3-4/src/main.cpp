#include "distance.h"

// Main Function
int main() 
{
  Distance d1(34,95);
  Distance d2;

  d2 = d1; //assignment operator

  Distance d3 = d2;

  Distance d4(d3);


  return 0;
}