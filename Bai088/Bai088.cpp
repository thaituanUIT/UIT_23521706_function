#include <iostream>
#include <iomanip>
using namespace std;
float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap so thuc x: ";
	cin >> x;

	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;

	cout << "Tong S(" << x << "," << n << ") la: ";
	cout << fixed << setprecision(3) << Tong(x, n);
	return 0;
}

float Tong(float xx, int nn)
{
	float s = 0, m = 0;
	int i = 1, dau = +1;

	while (i <= (2 * nn))
	{
		m = m + i;
		s = s + dau / m;
		i++;
		dau = -dau;
	}
	return s;
}