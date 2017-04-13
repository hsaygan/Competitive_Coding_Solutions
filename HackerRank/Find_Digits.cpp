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
        int n, n2, n3, ans=0, length=1;
        cin >>n;
        n2 = n;
        n3 = n;
        for (int a=0; a<=9; a++)
        {
            if (n2/10 != 0)
            {
                length ++;
            }

            n2 = n2/10;
        }

        for (int a=0; a<length; a++)
        {
            if (n3%10 != 0)
            {
                if ((n%(n3%10)) == 0)
                {
                    ans ++;
                }
            }

            n3 = n3/10;
        }

        cout << ans << endl;
    }
}
