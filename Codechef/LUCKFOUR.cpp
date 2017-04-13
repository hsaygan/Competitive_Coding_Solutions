#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,num=0,x,y=10;
    cin >> n;
    for (int a=0;a<n;a++,num=0)
    {
        num=0;
        cin >> x;
        int pwr=0;
        while((x/y)!=0)
        {
            pwr++;
            y = pow(10, pwr);
        }
        y = 10;
        for (int b=0; b<pwr; b++, y*10, x=x/10)
        {
           if((x%y) == 4)
            {
                num++;
            }
        }
        cout << num << endl;
    }
}
