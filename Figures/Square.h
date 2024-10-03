#pragma once
#include "Figure.h"

class Square : public Figure{
private:
    int side;
public:
    Square(const int& x, const int& y, const int& side) : Figure(x, y, getID()), side(side){}
    Square(const int& x, const int& y, const int& side, const int& id) : Figure(x, y, id), side(side){ setID(id);}

    void draw(vector<vector<char>> &grid) override;
    void list() override;
    string save() override;
};
