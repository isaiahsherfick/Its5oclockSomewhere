#include<iostream>
class Rectangle
{
	//private by default
	int width, height;
	public:
		void set_values(int,int);
		int area(void);
};
void Rectangle::set_values(int w, int h)
{
	width = w;
	height = h;
}
int Rectangle::area()
{
	return width*height;
}
int main()
{
	Rectangle r;
	r.set_values(5,5);
	std::cout << "Area: " << r.area() << "\n";
	return 0;
}
