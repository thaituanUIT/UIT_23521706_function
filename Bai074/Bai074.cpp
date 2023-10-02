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
	float s = 0, t = 1, m = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + t / m;
		i++;
	}
	return s;
}