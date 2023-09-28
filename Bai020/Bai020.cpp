#include <iostream>
#include <iomanip>
using namespace std;
long KetQua(long);

int main()
{
	long x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua la: ";
	cout << KetQua(x);
	return 1;
}

long KetQua(long xx)
{
	long x2, x4, x6, x8;
	x2 = xx * xx;
	x4 = x2 * x2;
	x6 = x4 * x2;
	x8 = x4 * x4;
    return x8 * x6;
}