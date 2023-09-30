#include <iostream>
using namespace std;
void SoLonNhat(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

    cout << "Chu so lon nhat cua " << n << " la: ";
    SoLonNhat(n);

	return 0;
}

void SoLonNhat(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	cout << lc;
}