#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int Sohang(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n :";
    cin >> n;

    cout << "So hang (" << n << ") la: ";
    cout << Sohang(n);
    return 0;
}
int Sohang(int nn)

{
	double at = 2, ahh;
	int i = 2;

	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}