#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int num0=0, num1=0;
        for (int a=0; a<x.length(); a++)
        {
            if (x.at(a) == '1')
            {
                num1++;
            }
            else
            {
                num0++;
            }
        }
        //cout << "\nONE = " << num1 << " ZERO = " << num0 << endl;
        if (num1>num0)
        {
            cout << "WIN\n";
        }
        else
        {
            cout << "LOSE\n";
        }
    }
}
