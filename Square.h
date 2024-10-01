#pragma once
#include "Figure.h"

class Square : public Figure{
private:
    int side;
public:
    Square(const int& x, const int& y, const int& side) : Figure(x, y, setID()), side(side){}

    void draw(vector<vector<char>> &grid) override;
    void list() override;

};
