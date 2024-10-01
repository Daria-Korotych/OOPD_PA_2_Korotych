#include "CLI.h"

#include <iostream>

#include "Board.h"
#include "CanvasController.h"

using namespace std;

void CLI::addFigure() {
    printf("Enter your figure:\n1. triangle\n2. circle\n3. square\n4. rectangle\n");
    int input;
    cin >> input;
    int x, y;
    printf("Enter the coordinate x:");
    cin >> x;
    printf("Enter the coordinate y:");
    cin >> y;
    switch (input) {
        case 1:
            int height;
            printf("Enter the height:");
            cin >> height;
            CanvasController::addFigure("triangle", {x, y, height});
            break;
        case 3:
            int side;
            printf("Enter the side:");
            cin >> side;
            CanvasController::addFigure("square", {x, y, side});
            break;
        default:
            printf("Enter valid input");
            break;
    }
}

void CLI::directCommand() {
    string command;
    while (command != "exit") {
        cout << "Enter your command:" << endl;
        cin >> command;
        if (command == "add") { addFigure(); }
        else if (command == "draw") {
            Board board;
            board.print();
        }
        else if (command == "list") { CanvasController::listFigures(); }
        else if (command == "clear") { CanvasController::removeFigures(); }
        else if (command == "undo") { CanvasController::undo(); }
    }
}
