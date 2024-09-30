#pragma once
#include <vector>

using namespace std;

class Figure {
protected:
    // int id;
    // string color;
    int x;
    int y;
public:
    Figure(const int& x, const int& y) : x(x), y(y) {}
    virtual void draw(vector<vector<char>> &grid) = 0;

    virtual ~Figure() = default;
};

