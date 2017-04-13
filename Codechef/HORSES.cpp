#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s[n];

        for (int a=0; a<n; a++)
        {
            cin >> s[a];
        }

        for (int b=0; b<n; b++)
        {
            for (int c=1; c<n; c++)
            {
                if(s[c] < s[c-1])
                {
                    s[c-1] = s[c-1] + s[c];
                    s[c]   = s[c-1] - s[c];
                    s[c-1] = s[c-1] - s[c];
                }
            }
        }

        int ans = (s[1] - s[0]);

        for (int a=1; a<n; a++)
        {
            if ((s[a]-s[a-1]) < ans)
            {
                ans = (s[a] - s[a-1]);
            }
        }

        cout << ans << endl;
    }
}
