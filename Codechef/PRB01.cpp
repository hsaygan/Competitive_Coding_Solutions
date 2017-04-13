#include  <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k=1;
        cin >> n;
        for (int a=2; a<=pow(n, 0.5); a++)
        {
            if (n%a == 0)
            {
                cout << "no\n";
                k=0;
                break;

            }
        }
        if (k)
        {
            cout << "yes\n";
        }
    }
}
