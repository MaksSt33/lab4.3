// Lab_04.3.cpp
// ������ ������ �����������
// ����������� ������ � 04.3
// ��������� �������, ������ ��������: ������� � �����������
// ������ 15

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, a, b, c, F;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << "     |"
		<< setw(7) << "F" << "       |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = -a * (x * x) + b;
		else
			if (x > 0 && b == 0)
				F = x / (x - c) + 5.5;
			else
				F = -x / c;
		
		x += dx;


		cout << "|" << setw(7) << setprecision(2) << x
			<< "   |" << setw(10) << setprecision(3) << F
			<< "    |" << endl;
	
	}
	cout << "---------------------------" << endl;
	return 0;
}
