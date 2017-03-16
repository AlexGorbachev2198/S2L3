#include <iostream>
using namespace std;
class Point
{
	double x, y;
public:
	double Get_X()
	{
		return x;
	}
	double Get_Y()
	{
		return y;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	Point()
	{
		x = 0;
		y = 0;
	}
};
class Triangle
{
	Point p1, p2, p3;
	double P;
public:
	Triangle(Point p1, Point p2, Point p3)
	{
		this->p1 = p1;
		this->p2 = p2;
		this->p3 = p3;
	}
	void Print()
	{
		cout << "x1 = " << p1.Get_X() << ", y1 = " << p1.Get_Y() << endl;
		cout << "x2 = " << p2.Get_X() << ", y2 = " << p2.Get_Y() << endl;
		cout << "x3 = " << p3.Get_X() << ", y3 = " << p3.Get_Y() << endl;
	}
};
class Rectangle: public Triangle
{
	Point p4;
public:
	Rectangle(Point p1, Point p2, Point p3, Point p4):
		Triangle(p1,p2,p3)
	{
		this->p4 = p4;
	}
	void Print()
	{
		Triangle::Print();
		cout << "x4 = " << p4.Get_X() << ", y4 = " << p4.Get_Y() << endl;
	}
};
int main()
{
	Point p1(1, 2); 
	Point p2(3, 4);
	Point p3(5, 6);
	Point p4(7, 8);
	Triangle T(p1, p2, p3);
	Rectangle R(p1, p2, p3, p4);
	cout << "Triangle:" << endl;
	T.Print();
	cout << "Rectangle:" << endl;
	R.Print();
	system("pause"); 
	return 0;
}
