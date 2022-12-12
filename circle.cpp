#include "circle.h"

circle::circle(int r, std::string c): radius(r), shape(c)
{
}

int circle::area()
{
	std::cout << "The area of the circle is: " << radius * radius * 3.14 << std::endl;
	return radius * radius * 3.14;
}

void circle::draw()
{
	std::cout << "Draw a circle ..." << std::endl;
}

void circle::erase()
{
	std::cout << "Erase a circle please..." << std::endl;
}
