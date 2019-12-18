#include "carton.h"
#include "carton_fileio.h"

int main() {
  // create a Carton object using the default constructor
  Carton box;
  box.ShowInfo();
  box.set_height(5);
  box.set_length(7);
  box.set_width(3);
  box.ShowInfo();
  
   // create a Carton object using the other constructor
  Carton box2(34,89,11);
  box2.ShowInfo();

  Carton box3(2,4,8);
 std::cout << "Here is the array of boxes:\n\n";
  // create an array of Cartons
std::array<Carton, kMaxArraySize> boxes;
  // add some valid elements to the array
  boxes[0] = Carton(12,14, 52);
  //read data from a file.
  std::string message;
  int record_size = 0;
  message = ReadDataFormatFromFile("../carton_data.txt", boxes, record_size);
  std::cout << message << "records loaded: " << record_size << std::endl;
  std::cout << "______________\n";

  // loop through the array
for(auto box = 0; box < record_size; ++box)
{
  boxes[box].ShowInfo();
  std::cout << "______________\n\n";
}

 //write data to file
  WriteDataToFile("../carton_data.csv", boxes, record_size);


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