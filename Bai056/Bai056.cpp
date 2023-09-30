#include <iostream>
using namespace std;
void UocSoChan(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong cac uoc so chan cua n la:";
	UocSoChan(n);

	return 1;

}

void UocSoChan(int nn)
{
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << " " << i;
		i = i + 2;
	}
}