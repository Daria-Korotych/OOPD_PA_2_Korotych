#include "Board.h"

#include <iostream>

#include "CanvasController.h"

using namespace std;

void Board::print() {
    CanvasController::getGrid(board);
    for(const auto& row : board) {
        for (const auto& col : row) {
            cout << col << ' ';
        }
        cout << endl;
    }
    CanvasController::clearGrid(board);
}
