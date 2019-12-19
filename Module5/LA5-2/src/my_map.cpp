#include <iostream> //for input output streams
#include <map> //for maps
#include <string> //for strings

int main()
{
    // maps are key value pair elements
    
    std::map<int, std::string> info;
    //to add elements ot the map, use insert() which takes a pair of key value
    //use make_pair to make a key pair.
    info.insert(std::make_pair(1, "John Weber"));
    info.insert(std::make_pair(2,"Utah Jazz"));
    std::cout << "size of the map: " << info.size() << std::endl;
    //find key value.
    auto position = info.find(1);
    if (position != info.end())
    {
        std::cout << "Found! the key is " << position->first
        <<", and the value is " << position->second << std::endl;
    }
    
        std::cout << "iterator based\n";

    for(auto it = std::begin(info); it != std::end(info); ++it)
    {
      std::cout << it->first << " " << it->second << "\t";
    }
    std::cout << "range based\n";
    for (std::pair<int,std::string> element : info)
    {
        std::cout << element.first << " " << element.second << "\t";
    }
    
        std::cout<<std::endl;

    return 0;
}