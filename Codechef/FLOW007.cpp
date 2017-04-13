#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int a=0; a<t; a++)
    {
        cin >> n;
        int r=0;
        while ((n/10)!=0)
        {
            r = r*10 + (n%10);
            n = n/10;
        }
        r = r*10 + n;
        cout << r << endl;
    }
}
