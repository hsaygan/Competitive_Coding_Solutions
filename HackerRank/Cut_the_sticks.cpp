#include <iostream>
using namespace std;
int main()                              //Cut The Sticks
{
    int n;
    cin >> n;
    int x[n];

    for (int a=0; a<n; a++)
    {
        cin >> x[a];
    }

    for (int b=0; b<n; b++)
    {
        for (int c=1; c<n; c++)
        {
            if(x[c] < x[c-1])
            {
                x[c-1] = x[c-1] + x[c];
                x[c]   = x[c-1] - x[c];
                x[c-1] = x[c-1] - x[c];
            }
        }
    }

    cout<<  n << endl;
    for (int b=0; b<n; b++)
    {
        int nonzero = 0, now;
        for (int a=0; a<n; a++)
        {
            if (x[a] > 0)
            {
                now = x[a];
                goto letsdoit;
            }
            if(a == n-1)
            {
                return 0;
            }
        }
        letsdoit:;
        for (int a=0; a<n; a++)
        {
            x[a] = x[a] - now;
            if (x[a]>0)
            {
                nonzero ++;
            }
        }
        if (nonzero > 0)
        {
            cout << nonzero << endl;
        }

    }
}
