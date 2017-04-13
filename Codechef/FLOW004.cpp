#include <iostream>
using namespace std;
int main()
{
    int t,n,sum;
    cin >> t;
    for (int a=0;a<t;a++)
    {
        cin >> n;
        sum = n%10;
        while ((n/10)!=0)
        {
            n=n/10;
        }
        sum += n;
        cout << sum << endl;
    }
}
