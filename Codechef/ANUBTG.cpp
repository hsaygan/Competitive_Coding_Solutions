#include <iostream>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int n[x];
        for (int b=0; b<x; b++)                   //Input
        {
            cin >> n[b];
        }
        for (int b=0; b<x; b++)                   //Sorting
        {
            for (int c=1; c<x; c++)
            {
                if(n[c] < n[c-1])
                {
                    n[c-1] = n[c-1] + n[c];
                    n[c]   = n[c-1] - n[c];
                    n[c-1] = n[c-1] - n[c];
                }
            }
        }
        int ans=0;
        for (int a=x-1, val=0; a>=0; a--)
        {
            ans = ans + n[a];
            val++;
            if(val==2)
            {
                val=0;
                a=a-2;
            }
        }
        cout << ans << endl;
    }
}
