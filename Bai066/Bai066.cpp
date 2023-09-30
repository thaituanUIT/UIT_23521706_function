#include <iostream>
using namespace std;
int SoChan(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	if (SoChan(n) == 1)
		cout << "So " << n << " ton tai chu so chan";
	else
		cout << "So " << n << " ko ton tai chu so chan";

	return 1;
} 

int SoChan(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}