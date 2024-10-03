#pragma once
#include <vector>

#include "Figure.h"

class Rectangle : public Figure{
private:
    int width;
    int height;
public:
    Rectangle(const int& x, const int& y, const int& width, const int& height) : Figure(x, y, getID()), width(width), height(height){}
    Rectangle(const int& x, const int& y, const int& width, const int& height, const int& id) :
    Figure(x, y, id), width(width), height(height){ setID(id);}
    void draw(std::vector<vector<char>> &grid) override;
    void list() override;
    string save() override;
};
