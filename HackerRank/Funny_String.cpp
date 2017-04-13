#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        int n=1;
        cin >> x;

        for (int a=1; a<x.length(); a++)
        {
            if (abs(x.at(a) - x.at(a-1)) != abs(x.at(x.length()-a) - x.at(x.length()-1-a)) )
            {
                n=0;
                break;
            }
        }

        if (n==1)
        {
            cout << "Funny\n";
        }
        else
        {
            cout << "Not Funny\n";
        }
    }
}
