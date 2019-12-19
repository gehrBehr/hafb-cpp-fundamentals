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

