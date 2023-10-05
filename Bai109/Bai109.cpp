#include <iostream>
#include <cmath>
using namespace std;
float exp();

int main()
{
	
    cout << "Gia tri e : ";
    cout << exp();
	return 0;
}

float exp()
{
	double s = 1 ;
	double m = 1 ;
	double e = 1;
	double i = 1;
	
    float epsilon = pow(10,-6);

	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float) 1 / m;
		s = s + e;
		i++;
	}

	return s;
}