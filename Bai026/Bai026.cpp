#include <iostream>
using namespace std;
void HoanVi(long&, long&);
void Nhap(long&, long&);
void Xuat(long, long);

int main()
{
	long a, b;
    
	cout << "Hai so ban dau: ";
	Nhap(a, b);
	
	HoanVi(a, b);

	cout << "Hai so sau khi hoan vi: ";
	Xuat(a, b);
	
	return 1;
}

void Nhap(long& aa, long& bb)
{
	cout << "\nso a ban dau la: ";
	cin >> aa;
	cout << "so b ban dau la: ";
	cin >> bb;
}

void HoanVi(long& aa, long& bb)
{
	if (&aa == &bb) return;
	aa = aa + bb;
	bb = aa - bb;
	aa = aa - bb;
}
void Xuat(long aa, long bb)
{
	cout << "\nso a luc sau la: " << aa;
	cout << "\nso b luc sau la: " << bb;
}