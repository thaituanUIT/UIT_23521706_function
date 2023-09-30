#include <iostream>
using namespace std;
int DemUocSo(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong cac uoc so cua n la: ";
	cout << DemUocSo(n);

	return 1;

}

int DemUocSo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;	
		i++;
	}
	return dem;
}