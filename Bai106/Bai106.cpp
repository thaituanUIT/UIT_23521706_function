#include <iostream>
#include <cmath>
using namespace std;
float sin(float)

int main()
{
	float x;
	cout << "Gia tri sin ";
	cin >> x;

    cout << sin(x);
	return 0;
}

float sin(float xx)
{
	double s, m = 1, e = 1, i = 4, x, t;
	cin >> x;
	float dau = -1;
	
	double xx = (x * 3.14) / 180;
	s = xx;
	t = xx; 
	e = xx;
    float epsilon = pow(10,-6);

	while (e >= pow(10, -6)) 
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + e * dau;
		dau = -dau;
		i = i + 2;
	}

	return s;
}