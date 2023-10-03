#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&, float&);
void Xuat(float, float, float);
void TriConfig(float, float, float);

int main()
{
	float x, y, z;
	Nhap(x, y, z);

	Xuat(x, y, z);

	cout << "\nDay la tam giac: ";
	TriConfig(x, y, z);

	return 0;
}

void Nhap(float& xx, float& yy, float& zz)
{
	cout << "Nhap canh a: ";
	cin >> xx;
	cout << "Nhap canh b: ";
	cin >> yy;
	cout << "Nhap canh c: ";
	cin >> zz;
}

void Xuat(float xx, float yy, float zz)
{
	cout << "Ba canh cua tam giac la: ";
	cout << "\nCanh a: " << xx;
	cout << "\nCanh b: " << yy;
	cout << "\nCanh c: " << zz;
}

void TriConfig(float xx, float yy, float zz)
{
	if (xx < yy + zz && yy < xx + zz && zz < xx + yy)
	{
		if (xx == yy && yy == zz)
		{
			cout << "Deu";
		}
		else if (pow(xx, 2) == pow(yy, 2) + pow(zz, 2) || pow(zz, 2) == pow(yy, 2) + pow(xx, 2)
			                                        || pow(yy, 2) == pow(zz, 2) + pow(xx, 2))
		{
			if (xx == yy || yy == zz || xx == zz)
			{
				cout << "vuong can";
			}
			else
			{
				cout << "vuong";
			}
		}
		else 
		{
			if (xx == yy || yy == zz || xx == zz)
			{
				cout << "can";
			}
			else
			{
				cout << "thuong";
			}
		}
	}
	else
	{
		cout << "ko phai la tam giac";
	}
}