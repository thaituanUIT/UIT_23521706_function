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
    if (nn == 0)
    return 1;
    if (nn == 1)
    return 1;
    
    double att = 1;
    double at = 1;
	double ahh; 
    int n;
	int i = 2;

	while (i <= nn)
	{
		ahh = att + at;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}