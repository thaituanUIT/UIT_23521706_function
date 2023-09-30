#include <iostream>
using namespace std;
int ChuSo(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Tong chu so chan cua " << n << " la: ";
    cout << ChuSo(n);

    return 1;
}

int ChuSo(int nn)
{
    int s = 0;
    int t = nn;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 0)
            s = s + dv;
        t = t / 10;
    }
    return s;
}