#include <iostream>
using namespace std;
int TichSo(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tich cac chu so cua n la: ";
	cout << TichSo(n);

	return 1;

}

int TichSo(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
	    tich = tich * dv;
		t = t / 10;
	}
	return tich;
}