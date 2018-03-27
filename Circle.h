#pragma once
#include "Shape.h"
#ifndef Circle_H
#define Circle_H

class Circle : public Shape{
	private :
		int r, pi; 	
	public :
		Circle(int R, int Pi)
		{
			r = R;
			pi = Pi;
		}
		int luas();
		int keliling();
};

#endif
