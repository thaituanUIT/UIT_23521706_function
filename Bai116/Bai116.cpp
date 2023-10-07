#include <iostream>
using namespace std;
int TinhAn(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n :";
    cin >> n;

    cout << "Ket qua";
    cout << TinhAn(n);
    return 0;
}
int TinhAn(int nn)

{
	if (nn == 0)
        return 1;
    if ( nn == 1)
        return 2;
    int att = 1;
    int at = 2;
    int ahh;
    int i = 2;

    while ( i <= nn)
    {
        ahh = 4 * at + att;
        i++;
        att = at;
        at = ahh;
    }
    return ahh;
}