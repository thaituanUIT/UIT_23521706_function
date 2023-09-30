#include <iostream>
using namespace std;
int TongUocSo(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong cac uoc so cua n la: ";
	cout << TongUocSo(n);

	return 1;

}

int TongUocSo(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	return s;
}