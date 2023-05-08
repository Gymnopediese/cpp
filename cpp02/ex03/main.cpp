
#include "Point.hpp"

#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void )
{
	Point a(0,0);
	Point b(1.06f, 4.74f);
	Point c(3.44f, 2.12f);

	Point d(1.4,3.42);
	Point e(2.32,4.62);
	Point f(0.48,4.5);
	Point g(2.83129,1.15745);
	Point h(2,2);
	Point i(-0.79516,-0.47727);
	Point j(3.13193,2.22847);
	Point k(0.47f, 2.12f);
	Point l(0, 2.12f);
	Point m(3, 0);
	Point n(0.80198,0.63133);
	cout << bsp(a, b, c, d) << " expected 1" << endl;
	cout << bsp(a, b, c, e) << " expected 0" << endl;
	cout << bsp(a, b, c, f) << " expected 0" << endl;
	cout << bsp(a, b, c, g) << " expected 0" << endl;
	cout << bsp(a, b, c, h) << " expected 1" << endl;
	cout << bsp(a, b, c, i) << " expected 0" << endl;
	cout << bsp(a, b, c, j) << " expected 1" << endl;
	cout << bsp(a, b, c, k) << " expected 0" << endl;
	cout << bsp(a, b, c, c) << " expected 0" << endl;
	cout << bsp(a, b, c, b) << " expected 0" << endl;
	cout << bsp(a, b, c, a) << " expected 0" << endl;
	cout << bsp(a, b, c, l) << " expected 0" << endl;
	cout << bsp(a, b, c, m) << " expected 0" << endl;
	cout << bsp(a, b, c, n) << " expected 1" << endl;
	
}