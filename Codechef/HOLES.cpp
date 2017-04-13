#include <iostream>
using namespace std;
int main()
{
    int t;
    string x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        int ans=0;
        for (int a=0; a<x.length(); a++)
        {
            if (x.substr(a,1) == "A" or x.substr(a,1) == "D" or x.substr(a,1) == "O" or x.substr(a,1) == "P" or x.substr(a,1) == "Q" or x.substr(a,1) == "R")
            {
                ans ++;
            }
            if (x.substr(a,1) == "B")
            {
                ans = ans+2;
            }
        }
        cout << ans << endl;
    }
}
