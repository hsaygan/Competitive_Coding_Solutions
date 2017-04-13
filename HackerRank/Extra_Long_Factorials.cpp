#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
const int num=160;                                             //Extra Long Factorials
void multiply (short int x[num], short int y[num], int k)
{
    int carry;
    if (k>=10)
    {
        //cout << "Multiple run\n";
        int m=k/10, n=k%10, temp;
        //cout << "m = " << m << " and n = " << n << endl;
        if (n==0)                                                           //Ones Multiply
        {
            for (int a=0; a<num; a++)
            {
                x[a] = 0;
            }
        }
        else if (n!=0)
        {
            //cout << "n!=0 ran" << endl;
            carry=0;
            for (int a=num-1; a>=0; a--)
            {
                //temp = x[a];
                x[a] = (x[a]*n + carry);
                carry = x[a]/10;
                x[a] = x[a]%10;
            }
        }

        carry=0;                                           //Tens Multiply
        for (int a=num-1; a>=0; a--)
        {
            y[a] = (y[a]*m + carry);
            carry = y[a]/10;
            y[a] = y[a]%10;
        }

        carry=0;
        for (int a=num-1; a>=0; a--)                 //Addition of Tens and Ones
        {
            x[a] += y[a] + carry;
            if (y[a] > 9)
            {
                carry = x[a]/10;
                x[a] = x[a]%10;
            }
        }

        /*for (int a=0; a<num; a++)
        {
            cout << x[a];
        }
        cout << endl;*/
    }
    else
    {
        //cout << "Single run\n";                     //Multiplication by ones
        carry=0;
        for (int a=num-1; a>=0; a--)
        {
            x[a] = (x[a]*k + carry);
            carry = x[a]/10;
            x[a] = x[a]%10;
        }
    }
}

int main()
{
    int length=1,n;
    short int x[num]={0}, y[num]={0};
    cin >> n;
    int temp=n;
    while (temp/10!=0)
    {
        temp /= 10;
        length++;
    }

    temp=n;
    for (int a=0; a<length; a++)
    {
        x[num-1-a] = temp%10;
        temp /= 10;
    }

    /*cout << "\nInitial : ";
    for (int a=0; a<num; a++)
    {
        cout << x[a];
    }
    cout << endl;*/

    for (int k=n-1; k>1; k--)
    {
        for (int a=num-1; a>0; a--)
        {
            y[a-1] = x[a];
        }
        //cout << "k = " << k << endl;
        multiply(x, y, k);

    }

    bool now=false;

    for (int a=0; a<num; a++)
    {
        if (x[a]!=0 or now==true)
        {
            cout << x[a];
            now = true;
        }

    }

    /*cout << "\nFinal : ";
    for (int a=0; a<num; a++)
    {
        cout << x[a];
    }
    cout << endl;*/
}
