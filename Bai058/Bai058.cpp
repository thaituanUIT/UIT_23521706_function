#include <iostream>
using namespace std;
int TongCacSo(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong cac chu so cua " << n << " la";
	cout << TongCacSo(n);

	return 1;
}

int TongCacSo(int nn)
{
	float s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	return s;
}