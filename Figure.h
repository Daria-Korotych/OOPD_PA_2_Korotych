#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Figure {
protected:
    int id;
    string color;
    int x;
    int y;
public:
    Figure();
    virtual void draw(vector<vector<char>> &grid) = 0;

    virtual ~Figure() = default;
};

