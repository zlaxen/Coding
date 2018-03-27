#pragma once
#include "Shape.h"
#ifndef Triangle_H
#define Triangle_H

class Triangle : public Shape{
	private :
		int base, height; 
	public :
		Triangle(int Base, int Height)
		{
			base = Base;
			height = Height;
		}
		int luas();
		int keliling();	
};

#endif
