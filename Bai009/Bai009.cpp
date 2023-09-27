#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float DienTich(int, int);

int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	cout << "Dien tich la: ";
	cout << setprecision(3) << DienTich(n, r);
	return 1;
}

float DienTich(int rr, int nn)
{
	return (float)1 / 2 * nn * pow(rr, 2) * sin(2 * M_PI / nn);
}