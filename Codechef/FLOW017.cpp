#include <iostream>
using namespace std;
int main()
{
    int t,n[3];
    cin >> t;
    while (t--)
    {
       cin >> n[0] >> n[1] >> n[2];


       for (int b=0; b<3; b++)                 //Sorting
        {
            for (int c=1; c<3; c++)
            {
                if(n[c] < n[c-1])
                {
                    n[c-1] = n[c-1] + n[c];
                    n[c]   = n[c-1] - n[c];
                    n[c-1] = n[c-1] - n[c];
                }
            }
        }

        cout << n[1] << endl;
    }
} 
