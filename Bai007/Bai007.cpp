#include <iostream>
#include <iomanip>
using namespace std;
float NhietDo(float);

int main()
{
	float f;
	cout << "Nhap nhiet do F: ";
	cin >> f;

	cout << "Nhiet do C la: ";
	cout << setprecision(3) << NhietDo(f);

	return 1;
}
float NhietDo(float ff)
{
	return (float)5 / 9 * (ff - 32);
}
