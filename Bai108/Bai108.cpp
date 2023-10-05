#include <iostream>
#include <cmath>
using namespace std;
float exp(long double);

int main()
{
	float x;
	cout << "Nhap x :";
	cin >> x;
	
    cout << "Gia tri e^x : ";
    cout << exp(x);
	return 0;
}

float exp(long double xx)
{
	double s = 1, m = 1, e = 1, i = 1, t = 1;

    float epsilon = pow(10,-6);

    while (e >= pow (10,-6))
	{
		t = t * xx;
		m = m * i;
		e = t / m;
		s = s + e;
		i++;
	}
	
	return s;
}