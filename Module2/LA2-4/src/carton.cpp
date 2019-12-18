#include "carton.h"

Carton::Carton()
{
    height_ = 0;
    width_ = 0;
    length_ = 0;
}

//second constructor
Carton::Carton(double length, double width, double height)
{
    length_ = length;
    width_ = width;
    height_ = height;
}

//functions that are part of a class are called methods.
double Carton::length()
{
    return length_;
}

double Carton::height()
{
    return height_;
}

double Carton::width()
{
    return width_;
}

void Carton::set_length(double length)
{
    length_ = length;
}

void Carton::set_width(double width)
{
    width_ = width;
}

void Carton::set_height(double height)
{
    height_ = height;
}

void Carton::ShowInfo()
{
  std::cout << "Box Height: " << height() << std::endl;
  std::cout << "Box Length: " << length() << std::endl;
  std::cout << "Box Width: " << width() << std::endl;
}
