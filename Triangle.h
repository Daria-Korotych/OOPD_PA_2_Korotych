#pragma once
#include "Figure.h"

class Triangle : public Figure{
private:
    int height;
public:
    Triangle(const int& x, const int& y, const int& height) : Figure(x, y), height(height) {}
    void draw(vector<vector<char>> &grid) override;
};
