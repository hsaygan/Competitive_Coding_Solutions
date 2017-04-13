#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int n, k=1;
    cin >> n;
    string str[n];
    for (int a=0; a<n; a++)
    {
        cin >> str[a];
        for (int b=0; b<str[a].length(); b++)
        {
            k=1;
            for (int c=0; c<x.length(); c++)
            {
                if (x.at(c) == str[a].at(b))
                {
                    k=0;
                    break;
                }
            }
            if (k==1)
            {
                break;
            }
        }

        if (k)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}
