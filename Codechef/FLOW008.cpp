#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int a=0; a<t; a++)
    {
        cin >> n;
        if (n<10)
        {
            cout << "What an obedient servant you are!" << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
