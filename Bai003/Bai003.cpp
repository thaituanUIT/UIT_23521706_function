#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float ChuVi(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;

	cout << "Chu vi la: ";
	cout << setprecision(3) << ChuVi(r);
	return 1;
}

float ChuVi(float rr)
{
	return 2 * M_PI * rr;
}