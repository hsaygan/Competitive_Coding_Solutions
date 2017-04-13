#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char x[n][n];

    for (int a=0; a<n; a++)
    {
        for (int b=0; b<n; b++)
        {
            cin >> x[a][b];
        }
    }

    for (int a=1; a<n-1; a++)
    {
        for (int b=1; b<n-1; b++)
        {
            if (x[a][b] > x[a][b-1] && x[a][b] > x[a][b+1] && x[a][b] > x[a+1][b] && x[a][b] > x[a-1][b])
            {
                x[a][b] = 'X';
            }
        }
    }

    for (int a=0; a<n; a++)
    {
        for (int b=0; b<n; b++)
        {
            cout << x[a][b];
        }
        cout << endl;
    }
}
