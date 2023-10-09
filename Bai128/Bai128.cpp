#include <iostream>
#include <cmath>
using namespace std;
float Sothutu(float,float);

int main()
{
    float a,b;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Ket qua la :";
    cout << Sothutu(a,b);
}
float Sothutu(float,float)
{
    float a,b,temp;
    if (a > b)
        temp = a;
    else
        a = b ;
        b = temp ;
    return a;
    return b;
}