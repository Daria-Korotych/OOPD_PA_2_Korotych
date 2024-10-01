//
// Created by darya on 10/1/2024.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw(std::vector<vector<char>> &grid) {
    if (height <= 0 || width <= 0) return;

    int board_height = static_cast<int>(grid.size());
    int board_width = static_cast<int>(grid[0].size());

    for (int i = 0; i <height; i++) {
        int xPos = x + i;

        //left side
        if (xPos < board_height && y < board_width) { grid[xPos][y] = '*'; }

        //right side
        if (xPos < board_height && y + width - 1 < board_width) { grid[xPos][y + width - 1] = '*'; }
    }

    for (int i = 0; i <width; i++) {
        int yPos = y + i;

        //bottom side
        if (x < board_height && yPos < board_width) { grid[x][yPos] = '*'; }

        //law side
        if (x + height - 1 < board_height && yPos < board_width) { grid[x + height -1][yPos] = '*'; }
    }
}

void Rectangle::list() {
    printf("circle:\nx: %d, y: %d, width: %d, height: %d, id: %d\n", x, y, width, height, id);
}
