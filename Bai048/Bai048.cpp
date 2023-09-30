#include <iostream>
#include <iomanip>
using namespace std;
int Tich(int, float);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	float x;
	cout << "Nhap so x: ";
	cin >> x;

	cout << "ket qua " << x << "," << n << " la ";
	cout << Tich(n, x);

	return 1;
}

int Tich(int nn, float xx)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * (xx + i);
		i++;
	}
	return t;
}