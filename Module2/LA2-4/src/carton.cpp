#include "carton.h"

 //const double Carton::kMaxSize = 100;
 const double Carton::kMinLength = 6;
 const double Carton::kMinWidth = 3;
 const double Carton::kMinHeight = 0.25;

Carton::Carton()
{
    height_ = 0;
    width_ = 0;
    length_ = 0;
}

//second constructor
Carton::Carton(double length, double width, double height)
{
    try
    {
        SetMeasurements(length, width, height);
    }
    catch(std::out_of_range e)
    {
        std::cerr << e.what() << '\n';
        throw;
    }
    
}

Carton::~Carton()
{
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
    if (length < kMinLength)
    {
        std::string error_msg = "Length must be greater than " 
        + std::to_string(kMinLength);
        throw std::out_of_range(error_msg);
    }
    
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
  std::cout << "Box Volume: " << Volume() << std::endl;
  
}

double Carton::Volume() const
{
    return length_ * width_ * height_;
}

void Carton::SetMeasurements(double length, double width, double height)
{
    if (length <= 0 || width <= 0 || height <=0)
    {
        throw std::out_of_range("All Carton measurements must be greater than zero.");
    }
    else
    {    
        length_ = length;
        width_ = width;
        height_ = height;
    }
}
