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
    return 0;
}
int Sohang(int)

{
	double at = 2, ahh, n;
	int i = 2;

	while (i <= n)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}
