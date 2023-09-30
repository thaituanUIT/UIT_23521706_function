#include <iostream>
using namespace std;
int TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tich cac uoc so cua n la: ";
	cout << TichUocSo(n);

	return 1;

}

int TichUocSo(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i++;
	}
	return t;
}