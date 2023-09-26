#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float DienTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;

	cout << "Dien tich la: ";
	cout << setprecision(3) << DienTich(r);
	return 1;
}

float DienTich(float rr)
{
	return M_PI * pow(rr, 2);
}