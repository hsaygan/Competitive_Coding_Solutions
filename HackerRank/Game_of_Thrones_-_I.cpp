#include <iostream>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int y[26] = {0};

    for (int a=97; a<=122; a++)
    {
        for (int b=0; b<x.length(); b++)
        {
            //int temp = x.at(b);

            if (x.at(b) == a)
            {
                y[a-97]++;
            }
        }
    }
    int rev = 0;
    for (int a=0; a<26; a++)
    {
        if (y[a]%2 != 0)
        {
            rev++;
        }
    }

    if (rev<=1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
