#include <iostream>
using namespace std;
void UocSoLe(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Cac uoc so le cua n la: ";
    UocSoLe(n);

	return 1;

}

void UocSoLe(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << " " << i;
		i = i + 2;
	}
}