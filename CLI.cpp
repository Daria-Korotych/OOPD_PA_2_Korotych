#include "CLI.h"

#include <iostream>

#include "Board.h"
#include "CanvasController.h"

using namespace std;

void CLI::addFigure() {
    printf("Enter your figure:\n1. triangle\n2. circle\n3. square\n4. rectangle\n");
    int input;
    cin >> input;
    switch (input) {
        case 1:
            int x, y, height;
            printf("Enter the coordinate x:");
            cin >> x;
            printf("Enter the coordinate y:");
            cin >> y;
            printf("Enter the height:");
            cin >> height;
            CanvasController::addFigure("triangle", {x, y, height});
            break;
        default:
            printf("Enter valid input");
            break;
    }
}

void CLI::printFigure(Board board) {
    board.print();
}
