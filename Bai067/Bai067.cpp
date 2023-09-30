#include <iostream>
using namespace std;
int SoLe(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	if (SoLe(n) == 1)
		cout << "So " << n << " ton tai chu so le";
	else
		cout << "So " << n << " ko ton tai chu so le";

	return 1;
}

int SoLe(int nn)
{
	int flag = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			flag = 1;
		t = t / 10;
	}
	return flag;
}