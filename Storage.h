#pragma once
#include <vector>

#include "Figure.h"


using namespace std;
class Storage {
private:
    static vector<Figure*> figures;
public:
    static vector<Figure*> getFigures();
};

