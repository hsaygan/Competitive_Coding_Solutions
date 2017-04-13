#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    int n,k,page=1, num=0;
    cin >> n >> k;
    int x[n];
    for (int a=0; a<n; a++)
    {
        cin >> x[a];
    }

    for (int chap=1; chap<=n; chap++)
    {
        for (int ques=1; ques<=x[chap-1]; ques++)
        {
            if (ques==page)
            {
                num++;
            }
            if (ques%k == 0 and ques!=x[chap-1])
            {
                page++;
            }
        }
        page++;
    }
    cout << num << endl;
}
