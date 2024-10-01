#pragma once
#include <vector>

#include "Figure.h"

class Rectangle : public Figure{
private:
    int width;
    int height;
public:
    Rectangle(const int& x, const int& y, const int& width, const int& height) : Figure(x, y, setID()), width(width), height(height){}
    void draw(std::vector<vector<char>> &grid) override;
    void list() override;
};
