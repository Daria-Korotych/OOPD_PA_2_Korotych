#pragma once
#include "Figure.h"

class Triangle : public Figure{
private:
    int height;
public:
    Triangle(const int& x, const int& y, const int& height) : Figure(x, y, getID()), height(height) {}
    Triangle(const int& x, const int& y, const int& height, const int& id) : Figure(x, y, id), height(height) { setID(id);}
    void draw(vector<vector<char>> &grid) override;
    void list() override;
    string save() override;
};
