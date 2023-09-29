#include <iostream>
#include <iomanip>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "tong T(" << n << ") la: ";
	cout << Tong(n);

	return 1;
}

int Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (i * (i + 1) * (i + 2));
		i++;
	}
	return s;
}