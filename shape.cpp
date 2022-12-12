#include "shape.h"

// shape class implementation
//shape::shape() = delete;
shape::shape(std::string c) :color(c) {}

std::string shape::getColor()
{
	return color;
}

//Area
int shape::area()
{
	std::cout << "Parent class area: " << std::endl;
	return 0;
}
//Draw
void shape:: draw()
{
	std::cout << "Draw parent shape in..." << std::endl;
}

//Erase
void shape::erase()
{
	std::cout << "Erease parent shape ..." << std::endl;
}
