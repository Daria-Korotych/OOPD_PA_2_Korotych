//
// Created by darya on 10/1/2024.
//

#include "Square.h"

#include <format>
#include <iostream>

using namespace std;

void Square::draw(vector<vector<char>> &grid) {
    if (side <= 0) return;

    int board_height = static_cast<int>(grid.size());
    int board_width = static_cast<int>(grid[0].size());

    for (int i = 0; i <side; i++) {
        int xPos = x + i;
        int yPos = y + i;

        if (xPos < board_width && y < board_height) { grid[y][xPos] = '*'; }

        //bottom side
        if (x < board_width && yPos < board_height) { grid[yPos][x] = '*'; }

        //law side
        if (x + side - 1 < board_width && yPos < board_height) { grid[yPos][x + side - 1] = '*'; }

        //right side
        if (xPos < board_width && y + side - 1 < board_height) { grid[y + side - 1][xPos] = '*'; }
    }
}

void Square::list() {
    printf("square:\nx: %d, y: %d, side: %d, id: %d\n", x, y, side, id);
}

string Square::save() {
    return format("square {} {} {} {}", x, y, side, id);
}
