//
// Created by darya on 9/29/2024.
//

#include "Storage.h"

vector<Figure*> Storage::figures;

vector<Figure*> Storage::getFigures() {
    return figures;
}

void Storage::addFigure(Figure *figure) {
    figures.push_back(figure);
}
