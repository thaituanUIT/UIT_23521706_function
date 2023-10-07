#include <iostream>
#include <cmath>
using namespace std;
int TinhAn(int);

int main()
{
    int n;
    cout << "Nhap n :";
    cin >> n;

    cout << "Ket qua : ";
    cout << TinhAn(n);
    return 0;
}
int TinhAn(int nn)

{
	if (nn == 0)
        return -1;
    if ( nn == 1)
        return 3;
    double att = -1;
    double at = 3;
    int t = 2;
    double ahh;
    int i = 2;

    while ( i <= nn)
    {
        t = t * 2 ;
        ahh = 5 * t + 5 * at - att ;
        i++;
        att = at;
        at = ahh;
    }
    return ahh;
}