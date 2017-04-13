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
        int n, c, m, choc=0, wrap = 0;
        cin >> n >> c >> m;
        choc = n/c;
        wrap = choc;
        while (wrap >= m)
        {
            choc += wrap/m;
            wrap = wrap + wrap/m - (wrap/m)*m;
        }
        cout << choc << endl;
    }
}
