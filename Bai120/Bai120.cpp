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
    
    double at = 2, ahh, n;
	int i = 2;
	cin >> n;

	while (i <= n)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	return ahh;
}