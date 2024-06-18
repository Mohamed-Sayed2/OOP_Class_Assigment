#include<iostream>
#include<string>
using namespace std;
class GeometricObject
{
protected:
	string color;
	bool filled;
public:
	GeometricObject()
	{
		color = "white";
		filled = false;
	}
	GeometricObject(string x, bool y)
	{
		color = x;
		filled = y;
	}
	string get_color()
	{
		return color;
	}
	void set_color(string a)
	{
		color = a;
	}
	bool get_filled()
	{
		return filled;
	}
	void set_filled(bool a)
	{
		filled = a;
	}
};
//
class circle :public GeometricObject
{
private:
	double radius;
public:
	circle()
	{
		radius = 0.0;
	}
	circle(double r)
	{
		radius = r;
	}
	circle(double rad, string c, bool f)
	{
		radius = rad;
		color = c;
		filled = f;
	}
	double get_radius()
	{
		return radius;
	}
	void set_radius(double raDi)
	{
		radius = raDi;
	}
	double get_area()
	{
		double area;
		area = 3.14 * radius * radius;
		return area;
	}
	double get_perimeter()
	{
		double perimeter;
		perimeter = 2 * 3.14 * radius;
		return perimeter;
	}
	double get_diameter()
	{
		double diameter;
		diameter = radius + radius;
		return diameter;
	}
	void print_circle()
	{
		cout << "radius = " << radius << endl;
		cout << "area = " << get_area() << endl;
		cout << "perimeter = " << get_perimeter() << endl;
		cout << "diameter = " << get_diameter() << endl;
	}
};
//
class Rectangle :public GeometricObject
{
private:
	double width;
	double height;
public:
	Rectangle()
	{
		width = 0.0;
		height = 0.0;
	}
	Rectangle(double w, double h)
	{
		width = w;
		height = h;
	}
	Rectangle(double width, double height, string co, bool fi)
	{
		this->width = width;
		this->height = height;
		color = co;
		filled = fi;
	}
	double get_width()
	{
		return width;
	}
	void set_width(double wid)
	{
		width = wid;
	}
	double get_height()
	{
		return height;
	}
	void set_height(double heig)
	{
		height = heig;
	}
	double get_area()
	{
		double area;
		area = width * height;
		return area;
	}
	double get_perimeter()
	{
		double perimeter;
		perimeter = (width + height) * 2;
		return perimeter;
	}
};
class Triangle : public GeometricObject
{
private:
	double side1;
	double side2;
	double side3;
public:
	Triangle()
	{
		side1 = 1.0;
		side2 = 1.0;
		side3 = 1.0;
	}
	Triangle(double side1, double side2, double side3) {
		this->side1 = side1;
		this->side2 = side2;
		this->side3 = side3;
	}
	double get_Side1()
	{
		return side1;
	}
	void set_Side1(double s1)
	{
		side1 = s1;
	}
	double get_Side2()
	{
		return side2;
	}
	void set_Side2(double s2)
	{
		side2 = s2;
	}
	double get_Side3()
	{
		return side3;
	}
	void set_Side3(double s3)
	{
		side3 = s3;
	}
	double get_area() {
		double area = 0.5 * side1 * side2;
		return area;
	}
	double getPerimeter() {
		return side1 + side2 + side3;
	}
	void print() {
		cout << "Triangle: side1 = " << side1;
		cout << ", side2 = " << side2;
		cout << " , side3 = " << side3 << endl;
	}
};
void main()
{
	GeometricObject obj1;
	GeometricObject obj2("black", true);
	cout << obj1.get_color() << endl;
	cout << obj2.get_color() << endl;
	obj1.set_color("red");
	obj2.set_color("orange");
	cout << endl;
	cout << "new color " << endl;
	cout << obj1.get_color() << endl;
	cout << obj2.get_color() << endl;
	cout << endl;
	cout << "filled : " << obj1.get_filled() << endl;
	cout << "filled : " << obj2.get_filled() << endl;
	cout << endl;
	obj1.set_filled(true);
	obj2.set_filled(false);
	cout << "new filled " << endl;
	cout << "filled : " << obj1.get_filled() << endl;
	cout << "filled : " << obj2.get_filled() << endl;
	//
	cout << endl;
	cout << "informatin of the circle : " << endl;
	circle ob1;
	circle ob2(8.0);
	circle ob3(9.0, "blue", true);
	ob1.print_circle();
	cout << endl;
	ob2.print_circle();
	cout << endl;
	cout << "the color of circle : " << ob3.get_color() << endl;
	cout << "the filled of circle : " << ob3.get_filled() << endl;
	ob3.print_circle();
	cout << endl;
	//
	cout << "informatin of the Rectangle : " << endl;
	Rectangle o1;
	Rectangle o2(4.0, 5.0);
	Rectangle o3(5.0, 6.0, "yellow", false);
	cout << "width = " << o1.get_width() << " height = " << o1.get_height() << endl;
	cout << "area = " << o1.get_area() << endl;
	cout << "perimeter = " << o1.get_perimeter() << endl;
	cout << endl;
	cout << "width = " << o2.get_width() << " height = " << o2.get_height() << endl;
	cout << "area = " << o2.get_area() << endl;
	cout << "perimeter = " << o2.get_perimeter() << endl;
	cout << endl;
	cout << "the color of Rectangle : " << o3.get_color() << endl;
	cout << "the filled of Rectangle : " << o3.get_filled() << endl;
	cout << "width = " << o3.get_width() << " height = " << o3.get_height() << endl;
	cout << "area = " << o3.get_area() << endl;
	cout << "perimeter = " << o3.get_perimeter() << endl;
	cout << endl;
	//
	cout << "informatin of the Triangle : " << endl;
	Triangle obje1;
	Triangle obje2(4.0, 4.0, 4.0);
	obje1.set_color("blue");
	obje1.set_filled(true);
	cout << "the color of Triangle : " << obje1.get_color() << endl;
	cout << "the filled of Triangle : " << obje1.get_filled() << endl;
	cout << endl;
	obje1.print();
	cout << "area = " << obje1.get_area() << endl;
	cout << "perimeter = " << obje1.getPerimeter() << endl;
	cout << endl;
	obje2.print();
	cout << "area = " << obje2.get_area() << endl;
	cout << "perimeter = " << obje2.getPerimeter() << endl;
	system("pause");
}