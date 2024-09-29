#include "CanvasController.h"
#include <vector>

#include "Figure.h"
#include "Storage.h"

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
