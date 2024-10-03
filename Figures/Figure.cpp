//
// Created by darya on 9/29/2024.
//

#include "Figure.h"
int counter = 0;

int Figure::getID() {
    return ++counter;
}

void Figure::setID(int id) {
    counter = id;
}
