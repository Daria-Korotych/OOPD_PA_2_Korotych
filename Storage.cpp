//
// Created by darya on 9/29/2024.
//

#include "Storage.h"

#include <iostream>

using namespace std;

vector<Figure*> Storage::figures;
vector<Figure*> Storage::state;

vector<Figure*> Storage::getFigures() {
    return figures;
}

void Storage::addFigure(Figure *figure) {
    figures.push_back(figure);
}

void Storage::removeFigures() {
    figures.clear();
}

void Storage::saveState() {
    state = figures;
}

void Storage::loadState() {
    if (!state.empty()) {
        figures = state;
        state.clear();
    }
    else {
        cout << "No figures found for ";
    }
}
