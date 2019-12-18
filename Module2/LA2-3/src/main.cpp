#include <array>
#include <iostream>
#include <fstream> //for io files
#include <string>
#include <iomanip>

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  
  // arrays that contain data
  const int kMaxSize = 21;
  std::array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14, 18};

  std::array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4, 10};

  std::array<std::string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrisville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden", "South Weber"};

  std::array<std::string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott", "Adam"};

  // create a variable of type ofstream
  std::ofstream commute_file;

  // open the file commute.txt
  commute_file.open("../commute.csv");
  if (commute_file.fail())
  {
    std::cout << "Unable to open \".csv\" file to write." << std::endl;
    return 1;
  }

  // write commute_minutes and commute_miles to the file commute.txt
  for (int index = 0; index < kMaxSize; ++index)
  {
    commute_file << commute_miles[index] << "," << commute_minutes[index] << std::endl;
  }
  commute_file.close();
  
  // create a variable of type ofstream and open the file town.txt
  std::ofstream hometown_list_file;
  hometown_list_file.open("../hometowns.csv");
  if (hometown_list_file.fail())
  {
    std::cout << "Unable to open \".csv\" file to write." << std::endl;
    return 1;
  }
  // write the towns to the file town.txt
 for (int index = 0; index < kMaxSize; ++index)
  {
    hometown_list_file << names[index] << "," << towns[index] << std::endl;
  }
  hometown_list_file.close();

  // create a record file as follows.
  // Header: minutes,miles, speed(min/miles),name,town
  std::ofstream commute_data;
commute_data.open("../utah_commuters.csv");
 if (commute_data.fail())
  {
    std::cout << "Unable to open \".csv\" file to write." << std::endl;
    return 1;
  }
  float minToHours = 60.0;
  commute_data << "Minutes,Miles,Mean Speed,Name,Hometown\n";
  for (int index = 0; index < kMaxSize; ++index)
  {
    commute_data 
    << commute_minutes[index] << "," << commute_miles[index] << ","
    << std::setprecision(3) << commute_miles[index]/(static_cast<float>(commute_minutes[index])/minToHours)    
    << "," << names[index] << "," << towns[index] << std::endl;
  }
  commute_data.close();

  return 0;
}
