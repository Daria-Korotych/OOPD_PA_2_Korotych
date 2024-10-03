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
            CanvasController::addFigure(1, {x, y, height});
            break;
        case 2:
            int radius;
            printf("Enter the radius:");
            cin >> radius;
            CanvasController::addFigure(2, {x, y, radius});
            break;
        case 3:
            int side;
            printf("Enter the side:");
            cin >> side;
            CanvasController::addFigure(3, {x, y, side});
            break;
        case 4:
            int width;
            printf("Enter the width:");
            cin >> width;
            printf("Enter the height:");
            cin >> height;
            CanvasController::addFigure(4, {x, y, width, height});
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
        else if (command == "shapes") { CanvasController::shapes(); }
        else if (command == "save") { CanvasController::save(); }
        else if (command == "load") { CanvasController::load(); }
        else if (command == "exit") { cout << "Bye!"; }
        else{ cout << "Enter valid input( Try again!" << endl;}
    }
}
