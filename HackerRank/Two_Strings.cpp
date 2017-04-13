#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x,y;
        char z[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        cin >> x >> y;
        int n=1;
        for (int a=0; a<26; a++)
        {
            if (x.find(z[a]) >= 0 and x.find(z[a]) < x.length())
            {
                if (y.find(z[a]) >= 0 and y.find(z[a]) < y.length())
                {
                    cout << "YES\n";
                    n=0;
                    break;
                }
            }
        }
        if (n)
        {
            cout << "NO\n";
        }
    }
}
