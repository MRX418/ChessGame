/*
* \file   Bishop.hpp
* \author Nada Alami Chentoufi 
* \date   25 april 2022
*/
#pragma once
#include "Bishop.h"


Bishop::Bishop(Piece::Color color, char x, int y) {

	color_ = color;
	symbol_ = 'B';
    position_.first = map.find(x)->second-1;
    position_.second = y-1;
	previousPosition_ = position_;
}

