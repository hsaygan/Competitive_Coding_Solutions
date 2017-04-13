#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,a,b;
        cin >> n >> a >> b;
        int k[n];
        if(a>b)
        {
            b = a+b;
            a = b - a;
            b = b - a;
        }
        for (int x=0; x<n; x++)
        {
            k[x] = a*(n-1-x) + b*(x);
        }
        int check = k[0];

        for (int x=1; x<=n; x++)
        {
            if (k[x] != k[x-1])
            {
                cout << k[x-1] << " ";
            }
        }
        cout << endl;
    }
}
