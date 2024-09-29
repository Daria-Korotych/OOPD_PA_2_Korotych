#pragma once
#include "Figure.h"

class Triangle : public Figure{
private:
    int height;
public:
    Triangle() : height() {}
    void draw(vector<vector<char>> &grid) override;
};
