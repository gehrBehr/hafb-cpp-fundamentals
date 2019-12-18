#include "height.h"
#include "counter.h"


int main()
{

    // Height my_height(24.0);

    // // std::cout << my_height.inches() << std::endl;

    // print_feet(my_height);

    Counter c1,c2;
    std::cout << "counter 1 is: " << c1.count() 
    << "\ncounter 2 is: " << c2.count() << std::endl;

    ++c1;
    ++c2;
    ++c2;
    std::cout << "counter 1 is: " << c1.count() 
    << "\ncounter 2 is: " << c2.count() << std::endl;


    c1 = ++c2;
    std::cout << "counter 1 is: " << c1.count() 
    << "\ncounter 2 is: " << c2.count() << std::endl;

    c1++;
    std::cout << "counter 1 is: " << c1.count() 
    << "\ncounter 2 is: " << c2.count() << std::endl;


    return 0;
}