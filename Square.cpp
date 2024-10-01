//
// Created by darya on 10/1/2024.
//

#include "Square.h"
#include <iostream>

using namespace std;

void Square::draw(vector<vector<char>> &grid) {
    if (side <= 0) return;

    int board_height = static_cast<int>(grid.size());
    int board_width = static_cast<int>(grid[0].size());

    for (int i = 0; i <side; i++) {
        int xPos = x + i;
        int yPos = y + i;
        //left side
        if (xPos < board_height && y < board_width) { grid[xPos][y] = '*'; }

        //bottom side
        if (x < board_height && yPos < board_width) { grid[x][yPos] = '*'; }

        //law side
        if (x + side - 1 < board_height && yPos < board_width) { grid[x + side -1][yPos] = '*'; }

        //right side
        if (xPos < board_height && y + side - 1 < board_width) { grid[xPos][y + side - 1] = '*'; }
    }
}

void Square::list() {
    printf("square:\nx: %d, y: %d, side: %d, id: %d\n", x, y, side, id);
}
