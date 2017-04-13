#include <iostream>
using namespace std;
int main()
{
    int d1,d2,m1,m2,y1,y2;
    cin >> d1 >> m1 >> y1;
    cin >> d2 >> m2 >> y2;
    //int m[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31}

    if ((y1<y2) or (m1<m2 && y1==y2) or (y1==y2 && m1==m2 && d1<=d2))
    {
        cout << 0 << endl;
        return 0;
    }

    if (y1 > y2)
    {
        cout << 10000 << endl;
        return 0;
    }

    if (y1 == y2 && m1 == m2 && d1>d2)
    {
        cout << (d1-d2)*15 << endl;
        return 0;
    }

    if (y1==y2 && m1 >m2)
    {
        cout << (m1-m2)*500 << endl;
        return 0;
    }
}
