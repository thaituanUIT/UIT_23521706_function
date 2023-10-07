#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int pi(double);

int main()
{ 
    int n;
    cout << "Nhap n :";
    cin >> n;

    cout << "Gia tri cua pi :";
    cout << pi(n);
    return 0;
}

int pi(double)
{
	double s=0 ; 
    double dau=1; 
    double e=4 ; 
    double i=1;

    float epsilon = pow(10,-6);

	while(e>=pow(10,-6))
	{
		e= (float)4/i;
		s = s + dau * e;
		i = i + 2;
		dau = - dau;

	}

	return s;
}