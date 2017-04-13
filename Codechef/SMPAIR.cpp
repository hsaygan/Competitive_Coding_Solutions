#include <iostream>
using namespace std;
int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        int n[k];

        for (int a=0; a<k; a++)                 //Input
        {
            cin >> n[a];
        }

        for (int b=0; b<k; b++)                 //Sorting
        {
            for (int c=1; c<k; c++)
            {
                if(n[c] < n[c-1])
                {
                    n[c-1] = n[c-1] + n[c];
                    n[c]   = n[c-1] - n[c];
                    n[c-1] = n[c-1] - n[c];
                }
            }
        }
        cout << n[0] + n[1] << endl;
    }
}
