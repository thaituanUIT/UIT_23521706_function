#include <iostream>
#include <cmath>
using namespace std; 
int Sohang(int);

int main()
{
    int n;
    cout << "Nhap n :";
    cin >> n;

    cout << "Ket qua : ";
    cout << Sohang(n);
    return 0;
}
int Sohang(int nn)
{
    if (nn == 1)
    return 2;
    
    double at = 2;
    double ahh;
    int n;
	int i = 2;

	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}
	return ahh;
}