#pragma once
#include <vector>

#include "Figure.h"


using namespace std;
class Storage {
private:
    static vector<Figure*> figures;
    static vector<Figure*> state;
public:
    Storage() = default;
    static vector<Figure*> getFigures();
    static void addFigure(Figure* figure);
    static void removeFigures();

    static void saveState();
    static void loadState();
};

