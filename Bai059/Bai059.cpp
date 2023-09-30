#include <iostream>
using namespace std;
int DemChuSo(int);

int main()
{
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "So chu so cua " << n << " la: ";
    cout << DemChuSo(n);

    return 1;
}

int DemChuSo(int nn)
{
    int dem = 0;
    int t = nn;
    while (t != 0)
    {
        dem++;
        t = t / 10;
    }
    return dem;
}