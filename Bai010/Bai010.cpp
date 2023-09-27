#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void Nhap(float&, float&);
void Xuat(float, float);
float ChuVi(float, float, float, float, float, float);

int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	float x3, y3;
	Nhap(x3, y3);
	cout << "Diem thu nhat: " << endl;
	Xuat(x1, y1);
	cout << "Diem thu hai: " << endl;
	Xuat(x2, y2);
	cout << "Diem thu ba: " << endl;
	Xuat(x3, y3);
	cout << "Chu vi la: ";
	cout << fixed << setprecision(3) << ChuVi(x1, y1, x2, y2, x3, y3);
	return 1;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

void Xuat(float xx, float yy)
{
	cout << "Hoanh do: " << xx << endl;
	cout << "Tung do: " << yy << endl;
}

float ChuVi(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float c = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	return a + b + c;
}