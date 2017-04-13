#include <iostream>
using namespace std;
int main()
{
    int t=0,g[2];
    cin >> t;
    for (int a=0; a<t; a++)
    {
        cin >> g[0] >> g[1];

        if (g[0]>g[1])
        {
            cout << g[0] << " ";
        }
        else
        {
            cout << g[1] << " ";
        }
        cout << g[0]+g[1] << endl;
    }
}
