/*********************************************************************
** Program name: Space
** Author:
** Date:
** Description: A class for a space in a Langston simulation.
*********************************************************************/

#include "Space.h"
#include "Critter.h"
#include <iostream>

Critter *Space::getCritter(){
    return critter;
}

std::string Space::getSymbol(){
    std::string rv;
    //add some validation on whether a Critter is present
    if (getCritter()){
        rv = getCritter()->getSymbol();
    } else {
        rv = " ";
    }

    return rv;
}

void Space::setCritter(Critter *movedCritter){
    critter = movedCritter;
}

void Space::removeCritter(){
    critter = nullptr;

}

Position Space::getPosition() {
    return position;
}

void Space::setSpace(int x, int y, Board *b){
    color = "_";
    position.x = x;
    position.y = y;
    board = b;
}

Space::~Space() {
    delete critter;
}
