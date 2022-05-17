/*
* \file   InstancesKingException.hpp
* \author Nada Alami Chentoufi 
* \date   25 april 2022
*/
#pragma once
#include <stdexcept>


class InstancesKingException : public std::logic_error
{
public:
	using std::logic_error::logic_error;
};
