#include "containers.h"
#include "csvstream.h"


void LoadData(std::vector<Data>& data, const std::string& input_file)
{
    csvstream csvinput("../data/input.csv"); 
    map<std::string, std::string> row;
    Data temp;
    while (csvinput >> row)
    {
        //  std::cout << row["id"] << "," << row["name"]
         << "," << row["animal"] << std::endl;  
            
            temp.id = row["id"];
            temp.name = row[""];
            temp.animal = row["animal"];
            data.push_back(temp);
    }  
   
}

/**
 * @brief Display the content of a map
 * 
 * @param st_count: Reference to map with key-> states, value-> count 
 */
void Display_by_State(std::map<std::string, int> &st_count)
{
    int total = 0;

    // Iterate over the map using c++11 range based for loop
	for (std::pair<std::string, int> element : st_count) 
    {
		// std::cout << element.first << " :: " << element.second << std::endl;
		// Or more explicitly

        // Accessing KEY from element
		std::string word = element.first;
		// Accessing VALUE from element.
		int count = element.second;
		std::cout << word << " :: " << count << std::endl;
        
        total += count;
	}
    std::cout << "A total of "<< total << " records for all states" << std::endl;
}