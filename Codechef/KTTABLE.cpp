#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum=0;
        cin >> n;
        int x[n], y[n];
        for (int a=0; a<n; a++)
        {
            cin >> x[a];
        }
        for (int b=0; b<n; b++)
        {
            cin >> y[b];
            if (b==0)
            {
                //cout << "\n Y = " << y[b] << " and X = " << x[b] << endl;
                if (y[b] <= x[b] || y[b] == x[b])
                {
                    sum ++;
                }
            }
            else
            {
                //cout << "\n Y= " << y[b] << " and X = " << x[b] << endl;
                if (y[b] <= x[b] - x[b-1])
                {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
}
