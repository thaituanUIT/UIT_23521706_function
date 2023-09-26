#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float TheTich(float);

int main()
{
	float r;
	cout << "Nhap ban kinh r: ";
	cin >> r;

	cout << "The tich hinh cau la: ";
	cout << setprecision(3) << TheTich(r);
	return 1;
}

float TheTich(float rr)
{
	return (float)4 / 3 * M_PI * pow(rr, 3);
}