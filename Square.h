#pragma once
#include "Shape.h"
#ifndef Square_H
#define Square_H

class Square : public Shape{
	private :
		int side;
	public :
		Square(int Side)
		{
			side = Side;
		} 
		int luas();
		int keliling();
};

#endif
