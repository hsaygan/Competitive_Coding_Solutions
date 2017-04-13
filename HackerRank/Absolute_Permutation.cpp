#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k, check=1;
        cin >> n >> k;
        int x[n+1];
        for (int a=1; a<=n; a++)
        {
            x[a] = a;
        }
        for (int a=1; a<=n; a++)
        {
            if (x[a] != a)
            {
                continue;
            }
            if (a+k > n)
            {
                check=0;
                cout << -1;
                break;
            }
            int temp = x[a];
            x[a] = x[a+k];
            x[a+k] = temp;
        }
        if (check==1)
        {
            for (int a=1; a<=n; a++)
            {
                cout << x[a] << " ";
            }
        }
        cout << endl;
    }
}
