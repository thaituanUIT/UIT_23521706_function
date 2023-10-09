#include <iostream>
#include <cmath>
using namespace std;

void GiaiBacHai(float,float,float);

int main ()
{
    float a;
    cout << "Nhap a:";
    cin >> a;
    float b;
    cout << "Nhap b:";
    cin >> b;
    float c;
    cout << "Nhap c:";
    cin >> c;

    GiaiBacHai(a,b,c);
    return 0;
}
void GiaiBacHai(float aa, float bb,float cc)
{
    float a,b,c,d;
    float delta = bb * bb-4 * aa * cc;
    if (delta != 0)
       if (delta > 0)
       {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt (d)) / ( 2 * a);
        cout << x1 << x2;
       }
    else 
        cout << "VN";
        else 
        {
            float x0 = -b / 2 * a;
            cout << x0;
        }

}