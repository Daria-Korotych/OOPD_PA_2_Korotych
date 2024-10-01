#pragma once
#include <vector>

using namespace std;

class Figure {
protected:
    // string color;
    int x;
    int y;
    int id;
public:
    Figure(const int& x, const int& y, const int& id) : x(x), y(y), id(id) {}

    virtual void draw(vector<vector<char>> &grid) = 0;
    virtual void list() = 0;

    int setID();

    virtual ~Figure() = default;
};

