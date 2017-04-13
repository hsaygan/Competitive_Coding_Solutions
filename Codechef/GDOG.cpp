#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int num = 0;
        for (int a=k; a>=1; a--)
        {
            if (n%a > num)
            {
                num = n%a;
            }
        }
        cout << num << endl;
    }
}
