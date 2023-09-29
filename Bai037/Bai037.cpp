#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong S(" << n << ") la: ";
	cout << Tong(n);

	return 1;
}

int Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, 3);
		i++;
	}
	return s;
}