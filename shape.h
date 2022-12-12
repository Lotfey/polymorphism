#pragma once
#include<iostream>
class shape
{
private:

	std::string color;
public:

	//constructor 
	//no default constructor
	shape()=delete;
	shape(std::string c);
	
	// Parent methods	
	// getters	
	std::string getColor();

	//Area
	virtual int area();

	//Draw
	virtual void draw();

	//Erase
	virtual void erase();
};

