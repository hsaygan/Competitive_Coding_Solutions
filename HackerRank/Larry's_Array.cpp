#include <iostream>
#include <math.h>
using namespace std;
int main()                                          //Larry's Array
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, print =1;
        cin >> n;
        int x[n];

        for (int a=0; a<n; a++)
        {
            cin >> x[a];
        }

        for (int boob=0; boob<n; boob++)
        {

        for (int a=2; a<n; a++)
        {
            //cout << " FOR LOOP RAN!\n";
            int time =0;
            while ((x[a] < x[a-1] or x[a] < x[a-2]) and time!=3)
            {
                //cout << " WHILE LOOP RAN!\n";

                int temp = x[a] + x[a-1] + x[a-2];
                x[a-2] = x[a-1];
                x[a-1] = x[a];
                x[a] = temp - x[a-1] - x[a-2];

                time ++;

            }
        }
        }
        for (int a=0; a<n; a++)
        {
            //cout << x[a] << " ";
        }

        for (int a=1; a<n; a++)
        {
            if (x[a] < x[a-1])
            {
                print = 0;
            }
        }

        if (print ==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
