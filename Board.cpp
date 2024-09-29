#include "Board.h"

#include <iostream>

using namespace std;

void Board::print() {
    for(const auto& row : board) {
        for (const auto& col : row) {
            cout << col << ' ';
        }
        cout << endl;
    }
}
