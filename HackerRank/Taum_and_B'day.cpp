#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long b,w,x,y,z;
        cin >> b >> w >> x >> y >> z;

        if (x+z<y)
        {
            //cout << "1 condition ran\n";
            cout << x*b + (x+z)*w << endl;
        }
        else if (y+z<x)
        {
            //cout << "2 condition ran\n";
            cout << y*w + (y+z)*b << endl;
        }
        else
        {
            //cout << "3 condition ran\n";
            cout << y*w + b*x << endl;
        }
    }
}
