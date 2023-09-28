#include <iostream>
using namespace std;
void HoanVi(long&, long&);
void Nhap(long&, long&);

int main()
{
	long a, b;
	Nhap(a, b);
	
	HoanVi(a, b);
	cout << "Hai so sau khi hoan vi la: " << "\na: " << a << "\nb: " << b;
	return 0;
}

void Nhap(long& aa, long& bb)
{
	cout << "so a ban dau la: ";
	cin >> aa;
	cout << "so b ban dau la: ";
	cin >> bb;
}

void HoanVi(long& aa, long& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;
}


