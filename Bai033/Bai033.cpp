#include <iostream>
#include <iomanip>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong S(" << n << ") la: ";
	cout << fixed << setprecision(4) << Tong(n);
	return 1;
}

float Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)i / (i * (i + 1));
		i++;
	}
	return s;
}