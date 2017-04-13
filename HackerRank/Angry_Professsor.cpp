#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k,ontime=0;
        cin >> n >> k;
        int t[n];

        for (int a=0; a<n; a++)
        {
            cin >> t[a];
            if (t[a] <= 0)
            {
                k--;
            }
        }

        if (k<=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
