#include "rectangle.h"

rectangle::rectangle(int w, int h, std::string c) : shape(c), width(w), height(h)
{
};

int rectangle::area()
{
    std::cout << "The area of the rectangle is: " << height * width << std::endl;
    return height * width;
}

void rectangle::draw()
{
    std::cout << "Draw a rectangle..." << std::endl;
}

void rectangle::erase()
{
    std::cout << "Erease a rectangle..."<< std::endl;
}
