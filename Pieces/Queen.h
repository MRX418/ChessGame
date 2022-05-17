/*
* \file  Queen.hpp
* \author Nada Alami Chentoufi 
* \date   25 april 2022
*/
#pragma once
#include "Piece.h"

class Queen : public Piece {
public:
	Queen(Piece::Color color,char x, int y);
};
