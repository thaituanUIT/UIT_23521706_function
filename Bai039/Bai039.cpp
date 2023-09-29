#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int Tich(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "tich T(" << n << ") la: ";
	cout << setprecision(3) << Tich(n);

	return 1;
}

int Tich(int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * (1 + (float)1 / pow(i,2));
		i++;
	}
	return t;
}