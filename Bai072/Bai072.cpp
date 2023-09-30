#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	float x;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Nhap so thuc x: ";
	cin >> x;

	cout << "Tong S(" << n << "," << x << ") la: ";
	cout << Tong(n);

	return 1;
}

float Tong(int nn)
{
	float s = 0, m = 0;
	int i = 1;
	while (i <= nn)
	{
		m = m * i;
		s = s + (float)1 / m;
		i++;
	}
	return s;
}