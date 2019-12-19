#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> my_items;
    //add elements 
    my_items.push_back(100);

    my_items.push_back(200);

    my_items.push_back(415);

    my_items.push_back(7);

    my_items.push_back(60);

    std::cout << "The front item: " << my_items.front() << std::endl;
    std::cout << "The last item: " << my_items.back() << std::endl;

    std::cout <<  "using index notation. " << std::endl;
    for (size_t i = 0; i < my_items.size(); i++)
    {
        std::cout << my_items[i] << std::endl;
    }
    
    std::cout <<  "Using an iterator. " << std::endl;
    //THE old way:
    //for (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
    //the 'new' way using auto. 
    for(auto it = std::begin(my_items); it != std::end(my_items); ++it)
    {
      std::cout << *it << std::endl;
    }

    std::cout <<  "Using range. " << std::endl;

    for (auto &&i : my_items)
    {
        std::cout << i << std::endl;

    }

    std::cout <<  "This is a new vector: " << std::endl;
    //define and initilize a vector. Use{} with comma separated values 
    int max = 5;
    std::vector<int> vec2(5,-1);
    for (auto i : vec2)
    {
        std::cout << i << " ";
    }
    std::cout <<std::endl;

    return 0;
}