#include <iostream>
#include <cmath>
using namespace std;
float Tong(float);

int main()
{
	float n;

	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	
	cout << "Tong S(" << n << ") la: ";
	cout << Tong(n);

	return 1;
}

float Tong(float nn)
{
	float s = 0, t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * i;
		s = s + i * t;
		i++;
	}

	return s;
}