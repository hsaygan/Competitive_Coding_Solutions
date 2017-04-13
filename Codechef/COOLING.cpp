#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int c[n], r[n], sum=0, b=n-1;

        for (int a=0; a<n; a++)                   //Input
        {
            cin >> c[a];
        }

        for (int a=0; a<n; a++)                   //Input
        {
            cin >> r[a];
        }

        for (int a=0; a<n; a++)                   //Sorting It
        {
            for (int b=1; b<n; b++)
            {
                if(c[b] < c[b-1])
                {
                    c[b-1] = c[b-1] + c[b];
                    c[b]   = c[b-1] - c[b];
                    c[b-1] = c[b-1] - c[b];
                }

                if(r[b] < r[b-1])
                {
                    r[b-1] = r[b-1] + r[b];
                    r[b]   = r[b-1] - r[b];
                    r[b-1] = r[b-1] - r[b];
                }
            }
        }
                                                    //Output
        for (int a=n-1; a>=0; a--)
        {
            if (c[a]<=r[b])
            {
                sum++;
                b--;
            }
        }
        cout << sum << endl;
    }
}
