#include<iostream>
#include"Point2D.h"

using namespace std;

int main() {

	//std::cout << "Hello C++\n"; bez using namespace std
	//cout << "Hello C++\n";

	Point2D my_point;

	cout << "Rozmiar obiektu my_point " <<
		sizeof(my_point) << endl;

	// my_point.x = 4.67; ZA TO JEST ZERO NA SPRAWDZIANIE!!! T2

	my_point.setX(4.67); // T3
	my_point.setY(5.47);

	cout << "Odleglosc" << 

	cout << "Wsp. X " << my_point.getX() << endl;
	cout << "Wsp. Y " << my_point.getY() << endl;

	return 0;
}