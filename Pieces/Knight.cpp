/*
* \file  Knight.cpp
* \author Nada Alami Chentoufi 
* \date   25 april 2022
*/
#pragma once
#include "Knight.h"

Knight::Knight(Piece::Color color, char x, int y) {
    color_ = color;
    position_.first = map.find(x)->second-1;
    position_.second = y-1;
    previousPosition_ = position_;
    symbol_ = 'C';
}


