#include <iostream>
#include <array>
#include <algorithm> //for iterators.

// Local Prototypes
void fun(int const& value); 


int main()
{
   std::array<int,3> info ={4,7,9};
   std::cout << "first element " << info.front() << std::endl;
   std::cout << "last element " << info.back() << std::endl;
   std::cout << "size " << info.size() << std::endl;
   
   for (size_t i = 0; i < info.size(); i++)
   {
       std::cout << info[i] << std::endl;
   }
   
   std::cout << "Loop using an iterator using begining"
    << " and end built in functions." << std::endl;
    for (auto it = std::begin(info); it != std::end(info); ++it)
    {
        std::cout << *it << " \n"; // it is a pointer (address) 
        //iterators perform better than using index because the compoiler 
        //doesn't have to rememeber where the structure is as well as teh value.
    }

    std::cout << "Range based loop." << std::endl;
    for (const auto& value : info)
    {
        std::cout << value << std::endl;
    }

    for (auto &&i : info)
    {
        std::cout << i << std::endl;

    }

    std::cout << "_______________\n Actual for each loop." << std::endl;

    //functor is a function that acts like an object.
    //the actual for each.
    std::for_each(std::begin(info), std::end(info),fun);

//Lambdas are [](){} they are like "instant functions"
// [] to take in any local variables.
// () declare parameters for the function.
// {} declare the body of teh function.
    std::cout << "Using for each loop and lambdas." << std::endl;
    std::for_each(std::begin(info), std::end(info),[](int const& value){std::cout<< value <<"\n";});
    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}