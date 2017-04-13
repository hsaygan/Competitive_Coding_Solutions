#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n1,m1,n2,m2;
        cin >> n1 >> m1;                //Input Database Matrix
        char x[n1][m1];
        for (int a=0; a<n1; a++)
        {
            for (int b=0; b<m1; b++)
            {
                cin >> x[a][b];
            }
        }


        cin >> n2 >> m2;                //Input Key Matrix
        char y[n2][m2];
        for (int a=0; a<n2; a++)
        {
            for (int b=0; b<m2; b++)
            {
                cin >> y[a][b];
            }
        }

        bool question = false;          //Sorting Algorithm
        for (int a=0; a<n1; a++)
        {
            for (int b=0; b<m1; b++)
            {
                if (x[a][b] == y[0][0])
                {
                    for (int c=0; c<n2; c++)
                    {
                        for (int d=0; d<m2; d++)
                        {
                            if(x[a+c][b+d] != y[c][d] or a+c>= n1 or b+d >=m1)
                            {
                                goto dawn;
                            }
                            if (d == m2-1 && c == n2-1)
                            {
                                question = true;
                            }
                        }
                    }
                }
            dawn:;
            }
        }

        if (question == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
