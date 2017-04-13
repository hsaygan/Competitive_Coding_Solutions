#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    for (int a=0; a<t; a++)
    {
        cin >> n;
        cout << floor(pow(n,0.5)) << endl;    //floor (form <math.h>) is the "greatest integer function"
    }
}
