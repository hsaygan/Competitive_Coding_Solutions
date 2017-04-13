#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cin >> n;
    string x[n];
    for (int a=0; a<n; a++)
    {
        temp = 1;
        cin >> x[a];
        char k = x[a].at(0), l = x[a].at(1);
        if (l==k)
        {
            cout << "NO\n";
            continue;
        }
        for (int b=2; b<x[a].length(); b++)
        {
            if (b%2==0)
            {
                if (x[a].at(b) != k)
                {
                    cout << "NO\n";
                    temp=0;
                    break;
                }
            }
            else
            {
                if (x[a].at(b) != l)
                {
                    cout << "NO\n";
                    temp=0;
                    break;
                }
            }
        }
        if (temp)
        {
            cout << "YES\n";
        }
    }
}
