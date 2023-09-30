#include <iostream>
using namespace std;
float Tong(int, float);

int main()
{
	int n;
	float x;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Nhap so thuc x: ";
	cin >> x;

	cout << "Tong S(" << n << "," << x << ") la: ";
	cout << Tong(n, x);

	return 1;
}

float Tong(int nn, float xx)
{
	float s = xx, t = xx;
	int i = 3;
	while (i <= (2 * nn + 1))
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}