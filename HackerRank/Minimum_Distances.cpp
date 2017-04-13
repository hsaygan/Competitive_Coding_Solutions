#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int n;
    bool huakya=false;
    cin >> n;
    int x[n],y[n/2],num=0;
    for (int a=0; a<n; a++)
    {
        cin >> x[a];
        for (int b=0; b<a; b++)
        {
            if (x[a] == x[b])
                {
                huakya=true;
                y[num] = a-b;
                num++;
            }
        }
    }
    if (huakya == false)
        {
        cout << -1 << endl;
        return 0;
    }
    int  temp = y[0];
    for (int a=1; a<num; a++)
    {
        if (y[a] < temp)
        {
            temp = y[a];
        }
    }
    cout << temp << endl;
}
