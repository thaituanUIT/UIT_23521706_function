#include <iostream>
#include <iomanip>
using namespace std;
float NhietDo(float);

int main()
{
	float c;
	cout << "Nhap nhiet do C: ";
	cin >> c;

	cout << "Nhiet do F la: ";
	cout << setprecision(3) << NhietDo(c);

	return 1;
}
float NhietDo(float cc)
{
	return (float)9 / 5 * cc + 32;
}
