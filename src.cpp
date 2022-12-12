#include"shape.h"
#include"rectangle.h"
#include"circle.h"

int main()
{
	shape* myPointer;

	rectangle R (3, 3, "Bleu");
	circle C(5, "Purple");

	// Point to the rectangle
	myPointer = &R;
	myPointer->area();
	myPointer->draw();
	myPointer->erase();

	std::cout << std::endl;

	//Pont to the circle
	myPointer = &C;
	myPointer->area();
	myPointer->draw();
	myPointer->erase();

	// Thanks to polymorphism concept, Now we have the same 
	// methods brhave differently according to their class
	// in the runtime.
}