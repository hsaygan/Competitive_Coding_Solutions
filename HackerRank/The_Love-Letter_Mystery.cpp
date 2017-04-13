#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()                                    //Love Letter
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;

        int sum=0;
        for (int a=0; a<(x.length())/2; a++)
        {
            //cout << "FOR RAN!\n" << endl;
            if (x.at(a) > x.at(x.length()-1-a))
            {
                char y = x.at(a);
                char z = x.at(x.length()-1-a);
                sum += y-z;
                //cout << "Y = " << y << " and Z = " << z << " : So sum now is added with " << y-z << endl;
            }
            else if (x.at(a) < x.at(x.length()-1-a))
            {
                char y = x.at(a);
                char z = x.at(x.length()-1-a);
                sum += z-y;
                //cout << "Y = " << y << " and Z = " << z << " : So sum now is added with " << z-y << endl;
            }
        }
        cout << sum << endl;
    }
}
