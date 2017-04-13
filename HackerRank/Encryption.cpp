#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    string str;
    int perfect = 0;
    cin >> str;

    for (int a=1; a<(int)sqrt(str.length())+2; a++)
    {
        if (a*a==str.length())
        {
            perfect++;
        }
    }

    if (perfect)
    {
        int c=(int)sqrt(str.length()), r = c ;

        for (int a=0; a<c; a++)
        {
            for (int b=a; b<str.length(); b=b+c)
            {
                cout << str.at(b);
            }

            cout << " ";
        }

    }
    else
    {
        int c=(int)sqrt(str.length()) + 1, r = c-1;

        for (int a=0; a<c; a++)
        {
            for (int b=a; b<str.length(); b=b+c)
            {
                cout << str.at(b);
            }

            cout << " ";
        }
    }
}
