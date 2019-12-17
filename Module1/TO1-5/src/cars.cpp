#include "cars.h"
int HorsePower()
{
    return 150;
}
// using namespace lamborghini;
int lamborghini::HorsePower()
{
    return 730;
}

// using namespace porsche;
int porsche::HorsePower()
{
    return 550;
}

void lamborghini::cout()
{
    std::cout << "Super car" << std::endl;
}