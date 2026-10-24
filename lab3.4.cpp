// Lab3.4.cpp
// Коваль Марія
// Лабораторна робота No 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 25
#include <iostream>
using namespace std;
int main()
{
	double x; // вихідна координата х
	double y; // вхідна координата у
	double R; // радус кола
	cout << "R = "; cin >> R;
	if (R <= 0)
	{
		cout << "R must be greater than 0" << endl;
		return 0;
	}
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	// розгалуження в повній формі
	if ((x >= 0 && y >= 0 && x*x + y*y <= R*R) ||
		(x <= 0 && y >= 0 && y <= x + R) ||
		(x <= 0 && y <= 0 && x * x + y * y <= R * R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}