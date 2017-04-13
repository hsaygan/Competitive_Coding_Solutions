#include <iostream>
using namespace std;
int main()
{
    int x,y,z,t;
    cin >> t;
    for (int a=0; a<t; a++)
    {
        cin >> x >> y;
        z=x*y;
        while(x!=y)
        {
            if(x>y)
            x=x-y;
            else
            y=y-x;
        }
        cout << x   << " " << z/x << endl;
    }
}
