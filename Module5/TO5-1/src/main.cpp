#include "containers.h"

// Main Function
int main()
{
  std::vector<Data> info;
  std::string infile = "../data/sample_data.csv";
  LoadData(info, infile);
  
  std::cout << "You loaded" << info.size() << " records" << std::endl;
  return 0;
}