#include <iostream>

using std::cout;
using std::cin;
using std::endl;

namespace shapes {
	class Shape {
		private:
			std::string type;

		protected:
			int width;
			int height;

			void _setWidth(int w) {
				width = w;
			}

			void _setHeight(int h) {
				height = h;
			}

		public:
			int getWidth() {
				return width;
			}

			int getHeight() {
				return height;
			}

			void createShape() {
				int x;
				// Asking user for the shape's width
				cout << "What is the shape's width?" << endl;
				cin >> x;
				_setWidth(x);

				// Asking user for the shape's height
				cout << "What is the shape's height?" << endl;
				cin >> x;
				_setHeight(x);
			}

			float getArea();
	};

	class Triangle : public Shape {
		private:
			std::string type = "Triangle";

		public:
			float getArea() {
				return (width * height) / 2;
			}
	};

	class Rectangle : public Shape {
		private:
			std::string type = "Rectangle";

		public:
			float getArea() {
				return width * height;
			}
	};
}