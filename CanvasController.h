#pragma once
#include <vector>

using namespace std;

class CanvasController {
public:
    static void getGrid(vector<vector<char>> &grid);
    static void clearGrid(vector<vector<char>> &grid);

    static void addFigure(const int& figure, const vector<int>& parameters);
    static void listFigures();
    static void removeFigures();
    static void undo();
    static void shapes();
    static void save();
    static void load();
};

