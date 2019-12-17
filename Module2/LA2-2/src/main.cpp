#include <array>
#include <iostream>
#include <string>
#include <fstream>

const int kMaxSize = 24;
/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() 
{
  // // create an ojbect of type ifstream
  // std::ifstream inputFile;

  // // open the file age.txt
  // inputFile.open("../age.txt");

  // if (inputFile.fail())
  // {
  //   std::cout << "Unable to open the file.";
  //   return 404;
  // }
  // // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;

  // // print out the values in the array
  ages.fill(-1); //initializes the elements to -1 for garbage 
  // int age_size = 0;

  // // read to the end of the file
  // while (age_size < kMaxSize && !inputFile.eof())
  // {
  //   inputFile >> ages[age_size];
  //   age_size++;
  // }
  // inputFile.close();
  
  // // print out the all the values in the array
  // // for (auto age : ages)
  // // {
  // //   std::cout << age << std::endl;  
  // // }

  // // print out the valid values in the array
  // for (auto age : ages)
  // {
  //   if (age != -1)
  //   {
  //     std::cout << age << std::endl;
  //   }
  // }




  // // Define an ifstream object and open the file name.txt
  // std::ifstream in;
  // in.open("../name.txt");

  // if (in.fail())
  // {
  //   std::cout << "Unable to open the file.";
  //   return 404;
  // }
  
  std::array<std::string, kMaxSize> names;
  names.fill("*");
  // // read one name, store it in the array, and print it
  // // getline(in,names[0]);


  // // std::cout << "The first person is: " 
  // // << names[0] << std::endl;

  // int nameIndex = 0;
  // // read the rest of the names in the file
  // while (nameIndex < kMaxSize && !in.eof())
  // {
  //   getline(in,names[nameIndex]);
  //   nameIndex++;
  // }
  // in.close();

  // // print valid elements in the names array
  // for(auto name : names)
  // {
  //   if (name != "*")
  //   {
  //     std::cout << name << std::endl;
  //   }
  // }
  // print all the elements in the names array
  // for(auto name : names)
  // {
  //   std::cout << name << std::endl;
  // }

  // Use a file with mixed values
  

  // Define an ifstream object and open the file name_age.txt
  std::ifstream inBoth;
  inBoth.open("../name_age.txt");

  // reset age and name arrays
  ages.fill(-1);
  names.fill("*");

  // read all the values from the name_age.txt file
  int index = 0;
  // read the rest of the names in the file
  while (index < kMaxSize && inBoth >> ages[index])
  {
    inBoth.ignore();
    getline(inBoth, names[index]);
    index++;
  }
  inBoth.close();

  // print valid elements in the names and ages array
for(int num = 0; num < index; ++num)
{
  std::cout << "Age: " << ages[num] << " for name: "
  << names[num] << std::endl;
}

  // print all elements in the names and ages array


  return 0;
}
