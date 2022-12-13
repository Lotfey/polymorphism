#pragma once
#include "shape.h"
class circle :
    public shape
{
private:
    int radius;
    
public:
    circle() = delete;
    circle(int r, std::string c);
    int area();
    void draw();
    void erase();
    ~circle();
};
