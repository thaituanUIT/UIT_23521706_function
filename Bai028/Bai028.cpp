#include <iostream>
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
	long s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, 2);
		i++;
	}
	return s;
}