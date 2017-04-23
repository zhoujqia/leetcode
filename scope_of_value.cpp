#include <iostream>
using namespace std;

void t1();
void t2();
int y;
int v1 = 10;

int main(int argc, char const *argv[])
{
	t1();
	t2();
	int v1 = 5;
	cout << "local v1 is " << v1 << endl;
	cout << "global v1 is " << ::v1 << endl;
	return 0;
}




void t1()
{
	int x = 1;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
	x++;
	y++;
}

void t2()
{
	int x = 1;
	cout << "x is " << x << endl;
	cout << "y is " << y << endl;
}