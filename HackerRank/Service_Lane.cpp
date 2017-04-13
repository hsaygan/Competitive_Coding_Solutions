#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int x[n];
    for (int a=0; a<n; a++)
    {
        cin >> x[a];
    }

    while(m--)
    {
        int k,l, res=3;
        cin >> k >> l;

        for (k; k<=l; k++)
        {
            if (x[k]<res)
            {
                res = x[k];
            }
        }

        cout << res << endl;
    }
}
