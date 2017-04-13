#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int a=0; a<t; a++)
    {
        cin >> n;
        if(n%2==0)
        {
            cout <<  n  << endl;
        }
        else
        {
            cout << n-1 << endl;
        }
    }
}
