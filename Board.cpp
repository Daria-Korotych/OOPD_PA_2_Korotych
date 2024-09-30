#include "Board.h"

#include <iostream>

#include "CanvasController.h"

using namespace std;

void Board::print() {
    CanvasController::getGrid(board);
    int counter = 0;
    for(const auto& row : board) {
        cout << counter++ << " ";
        for (const auto& col : row) {
            cout << col << ' ';
        }
        cout << endl;
    }
    CanvasController::clearGrid(board);
}
