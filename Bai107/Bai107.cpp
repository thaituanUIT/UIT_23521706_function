#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float cos();

int main()
{
	float x;
	cout << "Gia tri cos : ";
	cin >> x;

    cout << cos(x);
	return 0;
}
float cos()
{
	double s = 1, m = 1, e = 1, i = 2, t = 1;
	float dau = -1;

	float x;
	double xx = (x * 3.14) / 180;
    float epsilone = pow(10,-6);

	while (e >= pow(10, -6)) 
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + e * dau;
		dau = -dau;
		i = i + 2;
	}

	cout << setprecision(6) << fixed << s;

	return 0;
}