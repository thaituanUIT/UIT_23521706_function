#include <iostream>
#include <cmath>
using namespace std;
float Sothutu(float,float,float);

int main ()
{
  float a,b,c;
  cout << "Nhap a :";
  cin >> a;
  cout << "Nhap b :";
  cin >> b;
  cout << "Nhap c :";
  cin >> c;

  cout << "Ket qua la :";
  cout << Sothutu(a,b,c);
  return 0;
}
float Sothutu(float,float,float)
{
    float a,b,c,temp;
    if (a > b) 
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (a > c) 
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b > c) 
	{
		temp = b;
		b = c;
		c = temp;
	}
    return a,b,c;
}

