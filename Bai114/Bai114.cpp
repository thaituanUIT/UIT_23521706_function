#include <iostream>
#include <cmath>
using namespace std;
int Sohang(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n : ";
    cin >> n;

    cout << "So hang (" << n << ") la: ";
    return 0;
}
int Sohang(int)
{
	float at = -2, tt = 3, pp = 7, ahh;
	int i = 2;
    int n;

	while (i <= n )
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}

	return ahh;
}