#include <iostream>
using namespace std;
int ispalindrome(string y)
{
    for (int a=0; a<y.length(); a++)
    {
        if (y.at(a) != y.at(y.length()-1-a))
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int n=1;

        for (int a=0; a<x.length(); a++)
        {
            if (x.at(a) != x.at(x.length()-1-a))
            {
                if (ispalindrome(x.erase(a,1)))
                {
                    cout << a << endl;
                    n=0;
                    break;
                }
                else
                {
                    cout << x.length()-a << endl;
                    n=0;
                    break;
                }
            }
        }
        if (n)
        {
            cout << -1 << endl;
        }
    }
}
