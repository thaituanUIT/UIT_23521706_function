#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong S(" << n << ") la: ";
	cout << fixed << setprecision(3) << Tong(n);

	return 0;
}

float Tong(int nn)
{
	float s = 0;
	int i = 2;

	while (i <= nn)
	{
		s = (float)pow((i + s), 1 / i);
		i++;
	}

	return s;
}