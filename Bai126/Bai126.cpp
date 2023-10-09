#include <iostream>
#include <cmath>
using namespace std;
float Max(float,float);

int main()
{
    float a,b,max;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Ket qua la :";
    cout << Max(a,b);
}
float Max(float a, float b)
{
    float max = 0;
    if(a < b)
        max = b;
    else
        max = a;
    return max;
}
