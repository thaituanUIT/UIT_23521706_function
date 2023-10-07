#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float pi();

int main()
{
    cout << "Gia tri cua pi :";
    cout << pi();
    return 0;
}
float pi()
{
	float s = 3;
    float dau = 1;
    float e = 3;
    float i = 2;

    float epsilon = pow(10,-6);

	while (e >= (1 / pow(10, 6)))
	{
		e = 4 / (i * (i + 1) * (i + 2));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}

	cout << setprecision(6) << fixed << s;

	return 0;
}