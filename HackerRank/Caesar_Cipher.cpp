#include <iostream>
using namespace std;
int main()                              //Caesar Cipher
{
    int n, k;
    cin >> n;
    char x[n];
    for (int a=0; a<n; a++)
    {
        cin >> x[a];
    }
    cin >> k;

    for (int a=0; a<n; a++)
    {

        if (x[a] >= 65 && x[a] <= 90)
        {
            if ((x[a] + k%26) > 90)
            {
                x[a] = x[a] + k%26 - 26;
            }
            else
            {
                x[a] = x[a] + k%26;
            }
        }
        else if (x[a] >= 97 && x[a] <= 122)
        {
            if ((x[a] + k%26) > 122)
            {
                x[a] = x[a] + k%26 - 26;
            }
            else
            {
                x[a] = x[a] + k%26;
            }
        }
        cout << x[a];
    }
}
