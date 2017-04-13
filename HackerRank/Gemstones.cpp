#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()                                           //Gemstones
{
    char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int t;
    cin >> t;

    bool num[26];
    for (int a=0; a<26; a++)
    {
        num[a] = true;
    }

    for (int i=0; i<t; i++)
    {
        string x;
        cin >> x;

        bool now[26];
        for (int a=0; a<26; a++)
        {
            now[a] = false;
        }

        for (int a=0; a<x.length(); a++)
        {
            for (int b=0; b<26; b++)
            {
                if (x.at(a) == c[b])
                {
                    now[b]= true;
                }
            }
        }

        for (int a=0; a<26; a++)
        {
            if (now[a] == false)
            {
                num[a] = false;
            }
        }
    }

    int n=0;
    for (int a=0; a<26; a++)
    {
        if (num[a] == true)
        {
            n++;
        }

    }
    cout << n << endl;
}
