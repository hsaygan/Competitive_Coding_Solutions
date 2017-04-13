#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int y[x.length()];
        for (int a=0; a<x.length(); a++)
        {
            y[a] = 1;
            for (int b=a+1; b<x.length(); b++)
            {
                if (x.substr(a,1) == x.substr(b,1))
                {
                    y[a]++;
                }
            }
            for (int b=0; b<a; b++)
            {
                if (x.substr(a,1) == x.substr(b,1))
                {
                    y[a]=0;
                }
            }
        }
        int sum=0;
        for (int a=0; a<x.length(); a++)
        {
            sum = sum + y[a]/2 + y[a]%2;
        }
        cout << sum << endl;
    }
}
