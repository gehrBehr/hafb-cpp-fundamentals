#include <iostream>
#include <array>
#include <algorithm>
struct Part
{
    int model_number;
    int part_number;
    float cost;
};

struct Car
{
    Part tires;
    Part doors;
    Part windows;
};

// Local Prototypes
void fun(int const& value); 


int main()
{
    Part part1;
    part1.model_number = 6244;
    part1.part_number = 6244;
    part1.cost = 45.90;
    std::cout << "Model: " << part1.model_number
    <<"Part: " << part1.part_number
    << "Cost $" << part1.cost;

    Part part2 = {6277, 781, 32.10};

    Car sedan;
    sedan.doors.part_number = 101;
    sedan.windows.model_number = 7001;
    sedan.tires.cost = 89.99;

    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}