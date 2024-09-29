#pragma once
#include <vector>

using namespace std;

class Board {
private:
    const int BOARD_WIDTH = 80;
    const int BOARD_HEIGHT = 25;

    vector<vector<char>> board;

public:
    Board(): board(vector<vector<char>>(BOARD_HEIGHT, vector<char>(BOARD_WIDTH, ' '))){}

    void print();
};
