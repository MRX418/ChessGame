/*
* \file   Pawn.hpp
* \author Nada Alami Chentoufi 
* \date   25 april 2022
*/
#pragma once
#include "Piece.h"


class Pawn : public Piece
{
public:
	Pawn(Piece::Color color, char x, int y);
};
