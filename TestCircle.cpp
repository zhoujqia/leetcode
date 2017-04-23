#include <iostream>
using namespace std;

class Circle
{
public:
	double radius;

	Circle()
	{
		radius = 1;		
	}

	Circle(double newRadius)
	{
		radius = newRadius;
	}
	~Circle()
	{

	}

	double getArea();

	
};

double Circle::getArea()
{
	return radius * radius * 3.14159;
}

int main(int argc, char const *argv[])
{
	Circle circle1;
	Circle circle2(5.0);

	cout << "Radius is " <<  circle1.radius << " Area is " << circle1.getArea() << endl;
	cout << "Radius is " << circle2.radius << "  Area is " << circle2.getArea() << endl;
	cout << "Radius is " <<  Circle().radius << " Area is " << Circle().getArea() << endl;
	cout << "Radius is " <<  Circle(2).radius << " Area is " << Circle(2).getArea() << endl;

	return 0;
