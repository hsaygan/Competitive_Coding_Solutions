#include <iostream>
using namespace std;
int main()
{
    int t,hours,minutes;
    cin >> t;
    while (t--)
    {
        int num = 0;
        cin >> hours >> minutes;

        while (hours--)
        {
            if (hours == 0 or hours == 1 or hours == 2 or hours == 3 or hours == 4 or hours == 5 or hours == 6 or hours == 7 or hours == 8 or hours == 9 or hours == 11 or hours == 22 or hours == 33 or hours == 44 or hours == 55 or hours == 66 or hours == 77 or hours == 88 or hours == 99)
            {
                for (int m=0; m<minutes; m++)
                {
                    if (m == hours or m == hours%10 or (m/10 == m%10 && m%10 == hours))
                    {
                        num ++;
                    }
                }
            }
        }
        cout << num << endl;
    }
}
