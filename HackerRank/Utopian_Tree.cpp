#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, length=1;
        cin >> x;
        for (int a=1; a<=x; a++)
        {
            if (a==0)
            {
                cout << x << endl;
                return 0;
            }
            else if (a%2!=0)
            {
                length*=2;
            }
            else if (a%2==0)
            {
                length+=1;
            }

        }
       cout << length << endl;
    }
}
