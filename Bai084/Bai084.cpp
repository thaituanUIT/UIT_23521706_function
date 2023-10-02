#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float Tong(float, float);

int main()
{
	float x, n;

	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	cout << "Nhap so thuc x: ";
	cin >> x;

	cout << "Tong S(" << x << "," << n << ") la: ";
	cout << setprecision(3) << Tong(x, n);

	return 1;
}

float Tong(float xx, float nn)
{
	float s = 0, t = xx;
	int i = 1;

	while (i <= nn)
	{
		t = sin(t);
		s = s + t;
		i++;
	}

	return s;
}