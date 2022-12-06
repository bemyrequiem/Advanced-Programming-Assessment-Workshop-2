#include <iostream>
#include "shape.cpp"

class Triangle: public Shape {
	private:
		std::string type;

	protected:
		int width;
		int height;

	public:
		void setWidth(int w) {
			width = w;
		}

		void setHeight(int h) {
			height = h;
		}

		int getWidth() {
			return width;
		}

		int getHeight() {
			return height;
		}

		float getArea() {
			return (width * height) / 2;
		}
};

