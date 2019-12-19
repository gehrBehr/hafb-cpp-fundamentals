#include <iostream>
#include <set>
#include <algorithm>
// #include <iterator>


//find(): returns the pposition of the first element equal to the provided value
// you should always compare the value against the end() of the container.

int main()
{
    std::set<int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    //search for a value
    if (numbers.find(10) != numbers.end())
    {
        std::cout << "10 is in numbers" << std::endl;
    }
    std::cout << "the set has: " << numbers.size() << " elements " << std::endl;

    std::cout << "Iterate through the elements. " << std::endl;


    for(auto it = std::begin(numbers); it != std::end(numbers); ++it)
    {
      std::cout << *it << " ";
    }
    std::cout<<std::endl;
}
    