#include <iostream>

struct Dimension
{
    int feet;
    float inches;
};

struct Room
{
    Dimension length;
    Dimension width;
    
};

struct Home
{
    Room living;
    Room kitchen;
};

//prototype
void ShowHomeRoom(const Home& h);


int main()
{
    Home house;
    house.kitchen.length.feet = 20;
    house.kitchen.length.inches = 0;

    house.kitchen.width.feet = 30;
    house.kitchen.width.inches = 0;

    ShowHomeRoom(house);

    return 0;
}

void ShowHomeRoom(const Home& h)
{
    std::cout << "House Info: \n"
    << "Kitchen " <<  h.kitchen.length.feet 
    <<"\' " << h.kitchen.length.inches <<"\" " 
    << " x " << h.kitchen.width.feet 
    <<"\' " << h.kitchen.width.inches <<"\" " 
    << std::endl; 
}