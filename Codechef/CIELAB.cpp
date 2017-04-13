#include <iostream>
using namespace std;
int main()
{
        int a,b;
        cin >> a >> b;
        int n=a-b;
        if (n%10 == 0)
        {
            cout << n+1 << endl;
        }
        else if(((n%10)%9)==0)
        {
            cout << n-1 << endl;
        }
        else
        {
            cout << n+1 << endl;
        }
}
