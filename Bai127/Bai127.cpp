#include <iostream>
#include <cmath>
using namespace std;
float Min(float,float);

int main()
{
    float a,b,min;
    cout << "Nhap a :";
    cin >> a;
    cout << "Nhap b :";
    cin >> b;

    cout << "Ket qua la :";
    cout << Min(a,b);
}
float Min(float a, float b)
{
    float min = 0;
    if(a > b)
        min = b;
    else
        min = a;
    return min;
}
