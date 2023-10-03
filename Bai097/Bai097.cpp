#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float Tong(float, int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Tong S(" << n << ") la: ";
	cout << fixed << setprecision(3) << Tong(x, n);

	return 0;
}

float Tong(float xx, int nn)
{
	float s = 0, t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * xx;
		s = sqrt(t + s);
		i++;
	}

	return s;
}