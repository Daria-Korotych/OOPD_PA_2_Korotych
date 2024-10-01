#pragma once
#include <string>
#include <vector>

using namespace std;

class CanvasController {
public:
    static void getGrid(vector<vector<char>> &grid);
    static void clearGrid(vector<vector<char>> &grid);

    static void addFigure(const string &figure, const vector<int>& parameters);
    static void listFigures();
};

