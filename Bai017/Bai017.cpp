#include <iostream>
#include <iomanip>
using namespace std;
float KetQua(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua la: ";
	cout << KetQua(x);
	return 1;
}

float KetQua(float xx)
{
	float x2, x4, x8, x10;
	x2 = xx * xx;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x10 = x8 * x2;
	return x10 * xx;
}