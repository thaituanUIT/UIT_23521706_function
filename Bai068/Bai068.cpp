#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong S(" << n << ") la: ";
	cout << Tong(n);

	return 1;
}

float Tong(int nn)
{
	float s = 0, t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + t;
		i++;
	}
	return s;
}