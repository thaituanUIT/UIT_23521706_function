#include <iostream>
#include <cmath>
using namespace std; 
int Sohang(int);

int main()
{
    int n;
    cout << "Nhap n :";
    cin >> n;

    cout << "Ket qua (" << n << ") la : ";
    cout << Sohang(n);
    return 0;
}
int Sohang(int nn)

{
    if (nn == 1)
    return 1;

    double at = 1;
    double bt = 1; 
	double ahh, bhh, n;
	int i = 2;

	while (i <= nn)
	{
		ahh = 2 * at + 3 * bt;
		bhh = 3 * bt + at;
		i++;
		at = ahh;
		bt = bhh;
	}
	return ahh,bhh;
}