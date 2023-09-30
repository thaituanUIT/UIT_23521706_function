#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float Tong(float);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong la: ";
	cout << Tong(n);

	return 1;
}

float Tong(float nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / ((i + 1) * sqrt(i) + i * sqrt(i + 1));
		i++;
	}
	return s;
}