#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);

int main()
{
    int n;
    cout << "Nhap n :";
    cin >> n;

    cout << "Ket qua : ";
    cout << TinhAn(n);
    return 0;
}
int TinhAn(int nn)

{
	if (nn == 1)
        return 2;
    double at = 2;
    double ahh;
    int n;
	int i = 2;

	while (i <= n)
	{
		ahh = (-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
    }
    return ahh;
}