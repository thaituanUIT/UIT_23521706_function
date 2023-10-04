#include <iostream>
#include <cmath>
using namespace std;
float Tinh();

int main()
{
    cout << "Ket qua";
    cout << Tinh();
    return 0;
}

float Tinh()
{
    float s = 0;
    float e = 1;
    int i = 1;
    float epsilon = pow(10,-6);
    while ( e >= epsilon)
    {
        e = (float) 1/i;
        s = s + e;
        i = i + 1;
    }

    return s;
}