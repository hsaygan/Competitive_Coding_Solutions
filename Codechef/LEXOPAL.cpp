#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        for (int a=0; a<x.length(); a++)
        {
            if (x.at(a) == '.' and x.at(x.length()-1-a) != '.')
            {
                x.replace(a,1,x.substr(x.length()-1-a, 1));
                continue;
            }
            else if (x.at(a) != '.' and x.at(x.length()-1-a) == '.')
            {
                x.replace(x.length()-1-a,1,x.substr(a,1));
                continue;
            }
            if (x.at(a) == '.' && x.at(x.length()-a-1) == '.')
            {
                //cout << "Ariba!" << endl;
                x.replace(a,1, "a");
                x.replace(x.length()-1-a,1,"a");
                continue;
            }
            if (x.at(a) != x.at(x.length()-a-1))
            {
                x = "-1";
                break;
            }
        }
        cout << x << endl;
    }
}
