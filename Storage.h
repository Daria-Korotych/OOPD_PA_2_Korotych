#pragma once
#include <vector>

#include "Figure.h"


using namespace std;
class Storage {
private:
    static vector<Figure*> figures;
public:
    Storage() = default;
    static vector<Figure*> getFigures();
    static void addFigure(Figure* figure);
};

