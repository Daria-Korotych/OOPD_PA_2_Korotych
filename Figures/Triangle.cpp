//
// Created by darya on 9/29/2024.
//

#include "Triangle.h"

#include <format>
#include <iostream>

using namespace std;

void Triangle::draw(vector<vector<char>> &grid) {
    int board_height = static_cast<int>(grid.size());
    int board_width = static_cast<int>(grid[0].size());

    if (height <= 0) return;
    for (int i = 0; i < height; ++i) {
        int leftMost = x - i;
        int rightMost = x + i;
        int posY = y + i;

        if (posY < board_height) {
            if (leftMost >= 0 && leftMost < board_width)
                 grid[posY][leftMost] = '*';
            if (rightMost >= 0 && rightMost < board_width && leftMost != rightMost)
                grid[posY][rightMost] = '*';
        }
    }
    // Draw the base of the triangle separately
    for (int j = 0; j < 2 * height - 1; ++j) {
        int baseX = x - height + 1 + j;
        int baseY = y + height - 1;
        if (baseX >= 0 && baseX < board_width && baseY < board_height)
             grid[baseY][baseX] = '*';
    }
}

void Triangle::list() {
    printf("triangle:\nx: %d, y: %d, height: %d, id: %d\n", x, y, height, id);
}

string Triangle::save() {
    return format("triangle {} {} {} {}", x, y, height, id);
}
