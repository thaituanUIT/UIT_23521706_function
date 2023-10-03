#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float Tong(float, float);

int main()
{	
	float k, n;

    cout << "Nhap so nguyen duong n: ";
	cin >> n;
	cout << "Nhap so thuc k: ";
	cin >> k;

	cout << "Tong S(" << n << "," << k << ") la: ";
	cout << setprecision(3) << Tong(k, n);

	return 1;
}

float Tong(float kk, float nn)
{
	float s = 0;
	int i = 1;

	while (i <= nn)
	{
		s = s + pow(i, kk);
		i++;
	}

	return s;
}