#include iostream
using namespace std;
int main()
{
    int t,n;
    cin  t;
    while (t--)
    {
        cin   n;
        int x[n], ans[2] = {0,0};

        for (int a=0; an; a++)
        {
            cin  x[a];
        }

        while(n--)
        {
            int sum=1;
            for (int a=n-1; a=0; a--)
            {
                if(x[n] == x[a])
                {
                    sum ++;
                }
            }
            if (sum  ans[1])
            {
                ans[1] = sum;
                ans[0] = x[n];
            }

            if (sum == ans[1])
            {
                if (x[n]ans[0])
                {
                    ans[0] = x[n];
                }
            }
        }
        cout  ans[0]     ans[1]  endl;
    }
}
