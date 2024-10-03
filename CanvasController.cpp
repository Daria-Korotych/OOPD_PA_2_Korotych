#include "CanvasController.h"
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

#include "Figures/Circle.h"
#include "Figures/Rectangle.h"
#include "Figures/Square.h"
#include "Storage.h"
#include "Figures/Triangle.h"
#include "Figures/Figure.h"

using namespace std;

void CanvasController::getGrid(vector<vector<char>> &grid) {
    vector<Figure*> figures = Storage::getFigures();
    for (const auto& figure : figures) {
        figure->draw(grid);
    }
}

void CanvasController::clearGrid(vector<vector<char>> &grid) {
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            grid[i][j] = ' ';
        }
    }
}

void CanvasController::addFigure(const int& figure, const vector<int>& parameters) {
    Storage::saveState();
    switch (figure) {
        case 1: {
            auto triangle = new Triangle(parameters[0], parameters[1], parameters[2]);
            Storage::addFigure(triangle);
            break;
        }
        case 2: {
            auto circle = new Circle(parameters[0], parameters[1], parameters[2]);
            Storage::addFigure(circle);
            break;
        }
        case 3: {
            auto square = new Square(parameters[0], parameters[1], parameters[2]);
            Storage::addFigure(square);
            break;
        }
        case 4: {
            auto rectangle = new Rectangle(parameters[0], parameters[1], parameters[2], parameters[3]);
            Storage::addFigure(rectangle);
            break;
        }
        default:
            cout << "Invalid figure";
    }
}

void CanvasController::listFigures() {
    vector<Figure*> figures = Storage::getFigures();
    if (figures.empty()) {
        cout << "Nothing to list" << endl;
        return;
    }
    for (const auto& figure : figures) {
        figure->list();
    }
}

void CanvasController::removeFigures() {
    Storage::saveState();
    Storage::removeFigures();
    cout << "There is an empty board! All figures are deleted" << endl;
}

void CanvasController::undo() {
    Storage::loadState();
    cout << "Undo!" << endl;
}

void CanvasController::shapes() {
    cout << "Triangle: coordinates (x, y), height" << endl;
    cout << "Circle: coordinates (x, y), radius" << endl;
    cout << "Square: coordinates (x, y), side" << endl;
    cout << "Rectangle: coordinates (x, y), width, height" << endl;
}

void CanvasController::save() {
    vector<Figure*> figures = Storage::getFigures();
    vector<string> saveFigures;
    for (const auto& figure : figures) {
        saveFigures.push_back(figure->save());
    }

    ofstream outFile(R"(C:\cpp\OOPD_PA_2_Korotych\output.txt)");

    for (const string& line : saveFigures) {
        outFile << line << endl;
    }
    outFile.close();
}

void CanvasController::load() {
    Storage::saveState();
    Storage::removeFigures();

    ifstream inFile(R"(C:\cpp\OOPD_PA_2_Korotych\output.txt)");

    if (!inFile) {
        std::cerr << "Error: Could not open the file!" << std::endl;
        return;
    }

    string line;

    while (getline(inFile, line)) {
        istringstream iss(line);
        string shape;
        iss >> shape;

        if (shape == "triangle") {
            int x, y, height, id;
            iss >> x >> y >> height >> id;
            Storage::addFigure(new Triangle(x, y, height, id));
        }
        else if (shape == "circle") {
            int x, y, radius, id;
            iss >> x >> y >> radius >> id;
            Storage::addFigure(new Circle(x, y, radius, id));
        }
        else if (shape == "square") {
            int x, y, side, id;
            iss >> x >> y >> side >> id;
            Storage::addFigure(new Circle(x, y, side, id));
        }
        else if (shape == "rectangle") {
            int x, y, width, height, id;
            iss >> x >> y >> width >> height >> id;
            Storage::addFigure(new Rectangle(x, y, width, height, id));
        }
        else {
            cout << "Could not parse the shape in line: " << line << endl;
        }
    }

    inFile.close();
}
