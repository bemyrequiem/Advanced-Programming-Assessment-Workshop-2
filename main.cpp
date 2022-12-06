#include <iostream>
#include <string>
#include "shape.cpp"

using std::cout;
using std::cin;
using std::endl;
using namespace shapes;

int main() {
	std::string shape_type;

	cout << "What type of shape would you like? (triangle/rectangle)" << endl;
	cin >> shape_type;

	if (shape_type == "triangle") {
		Triangle shape;
		shape.createShape();
		cout << "Area is: " << shape.getArea() << endl;
	}
	else if (shape_type == "rectangle") {
		Rectangle shape;
		shape.createShape();
		cout << "Area is: " << shape.getArea() << endl;
	}
	else {
		cout << "That is not a valid shape type." << endl;
	}
}