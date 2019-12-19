#include "distance.h"

int main()
{
 // Distance commute(5586, 25);
  //commute.ShowDist();

  Distance d1(20,8);
  Distance d2(10,6);
  Distance d3;

  if(d2 < d1)
  {
    std::cout << d2 << " Is less than " << d1 << std::endl;
  }

  if(d1 > d2 )
  {
    std::cout << d1 << " Is greater than " << d2 << std::endl;
  }
  
  // std::cout << "Update distance 1 and 2 to equal 11ft 2in" << std::endl;
  // d1.update_distance(11,2);
  // d2.update_distance(11,2);

  // if(d1 == d2)
  // {
  //   std::cout << "They are the same distance." << std::endl;
  // }


  // d2.update_distance(20,11);
  // std::cout << "Update distance 2 to equal 20ft 11in" << std::endl;

  // if(d2 < d1)
  // {
  //   std::cout << d2 << " Is less than " << d1 << std::endl;
  // }
  // else
  // {
  //   std::cout << "D2 Is greater than D1" << std::endl;
  // }
  

  // if(d1 > d2 )
  // {
  //   std::cout << d1 << " Is greater than " << d2 << std::endl;
  // }
  // else
  // {
  //   std::cout << "D2 Is greater than D1" << std::endl;
  // }
  
return 0;
}