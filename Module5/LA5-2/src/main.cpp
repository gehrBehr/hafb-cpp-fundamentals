#include "../externals/csvstream/csvstream.h"
#include "containers.h"
using namespace std;

// Main Function
int main()
{
   std::vector<Data> pet_owners;
   std::string in_file = "../data/input.csv";

   LoadData(pet_owners, in_file);
  
   //loop
    for (auto it = std::begin(pet_owners); it != std::end(pet_owners); ++it)
    {

        std::cout << it->id << "\t" << it->name << "\t" << it->animal << std::endl;
    }
    

  return 0;
}


 