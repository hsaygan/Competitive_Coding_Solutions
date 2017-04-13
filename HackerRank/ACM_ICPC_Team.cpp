#include <iostream>
using namespace std;
int main()
{
    int p, t, k=0;
    cin >> p >> t;
    char x[p][t];
    int res[(p*(p-1))/2];

    for (int a=0; a<p;  a++)
    {
        for (int b=0; b<t; b++)
        {
            cin >> x[a][b];
        }
    }

    int sum = 0, var = 0;
    for (int a=0; a<p; a++)
    {
        for (int b=a+1; b<p; b++)
        {
                res[k] = 0;
                for (int c=0; c<t; c++)
                {
                    if (x[a][c] == '1' or x[b][c] == '1')
                    {
                        res[k]++;
                    }
                }

                if (res[k] > sum)
                {
                    sum = res[k];
                }
                k++;

         }
    }

    int  team = 0;
    for (int a=0; a<k; a++)
    {
        //cout << "res[" << a << "] = " << res[a] << endl;
        if (sum == res[a])
        {
            team++;
        }
    }
    cout << sum << endl << team << endl;
}
