#include "carton.h"


int main() {
  // create a Carton object using the default constructor
  Carton box;
  box.ShowInfo();
  box.set_height(5);
  box.set_length(2);
  box.set_width(2);
  box.ShowInfo();
  
   // create a Carton object using the other constructor
  Carton box2(34,89,11);
  box2.ShowInfo();

  // create an array of Cartons

  // add some valid elements to the array

  // loop through the array

  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}