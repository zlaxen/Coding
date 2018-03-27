#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include <iostream>

using namespace std;

int main(){
	
	Triangle triobject (1,10);	
	cout << triobject.luas() << endl;
	cout << triobject.keliling() << endl << endl;
	
	Square squobject (3);
	cout << squobject.luas() << endl;
	cout << squobject.keliling() << endl << endl;
	
	Circle cirobject (3.14,7);
	cout << cirobject.luas() << endl;
	cout << cirobject.keliling() << endl << endl;
	
	return 0;
}
