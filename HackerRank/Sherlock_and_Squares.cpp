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
        int a,b, num=0;
        cin >> a >> b;
        for (int x=(int)sqrt(a); x<=(int)sqrt(b); x++)
        {
            if (a<=x*x && x*x<=b)
            {
                num ++;
            }
        }
        cout << num << endl;
    }
}
