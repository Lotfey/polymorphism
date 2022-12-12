#pragma once
#include "shape.h"
class rectangle :
    public shape
{
private:
    int height;
    int width;
public:
    rectangle() = delete;
    rectangle(int w, int h, std::string c);
    int area();
    void draw();
    void erase();
};

