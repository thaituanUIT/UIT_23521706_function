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
    double n;
	int i = 2;

	while (i <= nn)
	{
		ahh = (at * at +2) / (2 * at);
		i++;
		at = ahh;
    }
    return ahh;
}