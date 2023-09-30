#include <iostream>
using namespace std;
void UocSo(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Cac uoc so cua n la: ";
	UocSo(n);

	return 1;

}

void UocSo(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << " " << i;
		i++;		
	}
}


	
