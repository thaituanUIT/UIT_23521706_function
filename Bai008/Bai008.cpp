#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float ChuVi(int, int);

int main()
{
	int n;
	cout << "Nhap so canh: ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	cout << "Chu vi la: ";
	cout << setprecision(3) << ChuVi(n, r);
	return 1;
}

float ChuVi(int rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}