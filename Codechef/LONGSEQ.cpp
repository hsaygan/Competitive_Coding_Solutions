#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num0=0, num1=0;
        string x;
        cin >> x;

        for (int a=0; a<x.length(); a++)
        {
            if (x.at(a) == '0')
            {
                num0++;
            }
            else
            {
                num1++;
            }
        }
        if (num0 + num1 == 1)
        {
            cout << "Yes\n";
            continue;
        }
        else
        {
            if (num0 > 1)
            {
                if (num1==1)
                {
                    cout << "Yes\n";
                    continue;
                }
                else
                {
                    cout << "No\n";
                    continue;
                }
            }
            else
            {
                if (num0==1)
                {
                    cout << "Yes\n";
                    continue;
                }
                else
                {
                    cout << "No\n";
                    continue;
                }
            }
        }
    }
}
