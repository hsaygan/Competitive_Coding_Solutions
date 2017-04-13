#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,bribe=0, k=2;
        cin >> n;
        int x[n+1];
        x[0] = 0;
        for (int a=1; a<=n; a++)
        {
            cin >> x[a];
        }

        while (k--)
        {
            for (int a=n-1; a>0; a--)
            {
                if (x[a] > x[a+1])
                {
                    //cout << "IF RAN! " << x[a] << " value at " << a << endl;
                    int temp = x[a];
                    x[a] = x[a+1];
                    x[a+1] = temp;
                    bribe++;

                }
            }
        }

        /*for (int a=1; a<=n; a++)
        {
            cout << x[a] << " : ";
        }*/

        for (int a=1; a<=n; a++)
        {
            if (x[a] != a)
            {
                cout << "Too chaotic\n";
                goto skip;
            }
        }
        cout << bribe << endl;

        skip:;
    }
}
