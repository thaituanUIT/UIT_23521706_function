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
	float s = 1 - xx, m = 1, t = xx;
	int i = 3, dau = +1;

	while (i <= (2 * nn + 1))
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
