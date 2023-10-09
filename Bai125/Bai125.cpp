#include <iostream>
#include <cmath>
using namespace std;
float Trituyetdoi(float,float);

int main()
{
    float a,b, trituyetdoi;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Ket qua la :";
    cout << a;

    cout << "Ket qua la : ";
    cout << b;
    return 0; 
}

float Trituyetdoi(float a, float b)
{ 

    if (a < 0)
		a = abs(a);
	if (b < 0)
		b = abs (b);
    return a,b ;
}

