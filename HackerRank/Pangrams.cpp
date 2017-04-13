#include <iostream>
using namespace std;
int main()
{
    string x;
    getline(cin, x);
    int n=0;
    char y[52];

    for (int a=65; a<=90; a++)
    {
        y[a-65] = a;
    }

    for (int a=97; a<=122; a++)
    {
        y[a - 71] = a;
    }

    for (int a=0; a<26; a++)
    {
        for (int b=0; b<x.length(); b++)
        {
            if (x.at(b) == y[a] or x.at(b) == y[a+26])
            {
                n++;
                goto complete;
            }
        }
        complete :;
    }

    if(n==26)
    {
        cout << "pangram\n";
    }
    else
    {
        cout << "not pangram\n";
    }
}
