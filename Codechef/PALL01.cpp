#include <iostream>
using namespace std;
int main ()
{
    int t;
    string n;
    cin >> t;
    while (t--)
    {
        bool rite = true;
        cin >> n;
        for (int a=0, b=n.length()-1; a<n.length(), b>=0; a++, b--)
        {
            if (n.substr(a,1)!=n.substr(b,1))
            {
                cout << "losses" << endl;
                rite = false;
                break;
            }
        }
        if (rite==true)
        {
            cout << "wins" << endl;
        }
    }
}
