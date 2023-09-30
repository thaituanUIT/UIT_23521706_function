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
	float s = 0, t = 1;
	int i = 2;
	while (i <= (2 * nn))
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}