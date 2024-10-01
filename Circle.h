#pragma once
#include "Figure.h"

class Circle : public Figure{
private:
    int radius;
public:
    Circle(const int& x, const int& y, const int& radius) : Figure(x, y, setID()), radius(radius) {}
    void draw(vector<vector<char>> &grid) override;
    void list() override;
};

