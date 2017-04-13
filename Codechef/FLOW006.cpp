#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int a=0;a<t;a++)
    {
        int sum=0;
        cin >> n;
        while(n!=0)
        {
            sum += + n%10;
            n= n/10;
        }
        cout  << sum << endl;
    }
}
