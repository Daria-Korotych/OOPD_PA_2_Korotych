//
// Created by darya on 10/1/2024.
//

#include "Circle.h"
#include <iostream>

using namespace std;

//chatGPT help in implementing Midpoint Circle Algorithm (Bresenham’s Circle Algorithm)

void Circle::draw(vector<vector<char>> &grid) {
    int board_height = static_cast<int>(grid.size());
    int board_width = static_cast<int>(grid[0].size());

    for (int i = 0; i < board_height; ++i) {
        for (int j = 0; j < board_width; ++j) {
            // Calculate the distance from the center to the current point (i, j)
            int dx = j - x;
            int dy = i - y;

            if (dx * dx + dy * dy >= radius * radius - radius * 0.8 && dx * dx + dy * dy <= radius * radius + radius * 0.8) {
                grid[i][j] = '*';
            }
        }
    }
}

void Circle::list() {
    printf("circle:\nx: %d, y: %d, radius: %d, id: %d\n", x, y, radius, id);
}
