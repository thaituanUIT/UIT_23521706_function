#include <iostream>
using namespace std;
long HangChuc(long&);

int main()
{
	long n;
	cout << "Nhap so nguyen duong: ";
	cin >> n;

	cout << "Chu so hang chuc la: ";
	cout << HangChuc(n);
	return 1;
}

long HangChuc(long& nn)
{
	return (nn / 10) % 10;
}