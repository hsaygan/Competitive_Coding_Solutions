#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k, sum=0;
        cin >> n >> k;
        int x[n+1], y[n+1];
        for (int a=0; a<=n; a++)
        {
            y[a] = 0;
        }
        for (int a=1; a<=n; a++)
        {
            cin >> x[a];
            y[x[a]]++;
        }
        for (int a=1; a<=n; a++)
        {
            if (y[a] >= k)
            {
                if (x[a] != a)
                {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
}
