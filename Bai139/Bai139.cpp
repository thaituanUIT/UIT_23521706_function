#include <iostream>
using namespace std;
void GiaiBacNhat(float,float);

int main ()
{
    float a;
    cin >> a;
    float b;
    cin >> b;

    GiaiBacNhat(a,b);
    return 0;
}
void GiaiBacNhat(float aa, float bb)
{
    if (aa == 0)
       if (bb == 0)
    cout << "VSN";
       else 
    cout << "VN";
    else 
    {
        float x = (-bb) / aa;
        cout << x;
    }
}