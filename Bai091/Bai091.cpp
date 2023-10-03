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
	float s = -1, m = 1, t = 1;
	int i = 2, dau = +1;

	while (i <= (2 * nn))
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
