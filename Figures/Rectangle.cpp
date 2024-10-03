//
// Created by darya on 10/1/2024.
//

#include "Rectangle.h"

#include <format>
#include <iostream>

using namespace std;

void Rectangle::draw(std::vector<vector<char>> &grid) {
    if (height <= 0 || width <= 0) return;

    int board_height = static_cast<int>(grid.size());
    int board_width = static_cast<int>(grid[0].size());

    for (int i = 0; i <height; i++) {
        int yPos = y + i;

        //left side
        if (yPos < board_height && x < board_width) { grid[yPos][x] = '*'; }

        //right side
        if (yPos < board_height && x + width - 1 < board_width) { grid[yPos][x + width - 1] = '*'; }
    }

    for (int i = 0; i <width; i++) {
        int xPos = x + i;

        //bottom side
        if (y < board_height && xPos < board_width) { grid[y][xPos] = '*'; }

        //law side
        if (y + height - 1 < board_height && xPos < board_width) { grid[y + height -1][xPos] = '*'; }
    }
}

void Rectangle::list() {
    printf("circle:\nx: %d, y: %d, width: %d, height: %d, id: %d\n", x, y, width, height, id);
}

string Rectangle::save() {
    return format("rectangle {} {} {} {} {}", x, y, width, height, id);
}
