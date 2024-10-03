#pragma once
#include "Figure.h"

class Circle : public Figure{
private:
    int radius;
public:
    Circle(const int& x, const int& y, const int& radius) : Figure(x, y, getID()), radius(radius) {}
    Circle(const int& x, const int& y, const int& radius, const int& id) : Figure(x, y, id), radius(radius) { setID(id);}
    void draw(vector<vector<char>> &grid) override;
    void list() override;
    string save() override;
};

