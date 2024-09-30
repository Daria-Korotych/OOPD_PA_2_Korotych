#include <iostream>

#include "Board.h"
#include "CLI.h"

using namespace std;

int main()
{
    string command;
    while (command != "exit") {
        cout << "Enter your command:" << endl;
        cin >> command;
        if (command == "add") {
            CLI::addFigure();
        }
        else if (command == "draw") {
            Board board;
            CLI::printFigure(board);
        }
    }

    return 0;
}
