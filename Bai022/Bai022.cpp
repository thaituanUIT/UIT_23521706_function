#include <iostream>
using namespace std;
long DonVi(long&);

int main()
{
	long n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;

	cout << "Chu so hang don vi la: ";
	cout << DonVi(n);
	return 1;
}

long DonVi(long& nn)
{
	return nn % 10;
}