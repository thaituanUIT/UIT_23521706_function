#include <iostream>
#include <iomanip>
using namespace std;
int KetQua(int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua la: ";
	cout << KetQua(x);
	return 1;
}

int KetQua(int xx)
{
	int x2, x4, x8, x16;
    x2 = xx * xx;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	return x16 * x16;
}