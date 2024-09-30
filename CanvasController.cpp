#include "CanvasController.h"
#include <vector>
#include <iostream>

#include "Figure.h"
#include "Storage.h"
#include "Triangle.h"

using namespace std;

void CanvasController::getGrid(vector<vector<char>> &grid) {
    vector<Figure*> figures = Storage::getFigures();
    for (const auto& figure : figures) {
        figure->draw(grid);
    }
}

void CanvasController::clearGrid(vector<vector<char>> &grid) {
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            grid[i][j] = ' ';
        }
    }
}

void CanvasController::addFigure(const string &figure, const vector<int>& parameters) {
    if (figure == "triangle") {
        auto triangle = new Triangle(parameters[0], parameters[1], parameters[2]);
        Storage::addFigure(triangle);
    }
}
