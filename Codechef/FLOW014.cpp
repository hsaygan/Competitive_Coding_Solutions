#include <iostream>
using namespace std;
int main()
{
    int t;
    double a,b,c;
    bool x,y,z;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        double x = false, y = false, z=false;

        if (a>50)
        {
            x = true;
        }
        if (b<0.7)
        {
            y = true;
        }
        if (c>5600)
        {
            z = true;
        }

        if (x==true && y==true && z==true)
        {
            cout << 10 << endl;
        }
        else if (x==true && y==true)
        {
            cout << 9 << endl;
        }
        else if (y==true && z==true)
        {
            cout << 8 << endl;
        }
        else if (x==true && z==true)
        {
            cout << 7 << endl;
        }
        else if (x==true || y==true || z==true)
        {
            cout << 6 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
    }
}
