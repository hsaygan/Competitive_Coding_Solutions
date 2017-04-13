#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()                                      //Make It Anagram
{
    int num=0;
    string x,y;
    cin >> x >> y;
    char c[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    short int n[26][2] = {0};
    for (int a=0; a<x.length(); a++)
    {
        for (int b=0; b<26; b++)
        {
            if (x.at(a) == c[b])
            {
                n[b][0]++;
                break;
            }
        }
    }
    for (int a=0; a<y.length(); a++)
    {
        for (int b=0; b<26; b++)
        {
            if (y.at(a) == c[b])
            {
                n[b][1]++;
                break;
            }
        }
    }
    for (int a=0; a<26; a++)
    {
        //cout << "\nChar : " << c[a] << "  x : " << n[a][0] << " y : " << n[a][1];
        if (n[a][0] != n[a][1])
        {
            num += abs (n[a][0] - n[a][1]);
        }
    }
    cout << num << endl;
}
