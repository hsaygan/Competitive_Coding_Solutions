#include <iostream>
using namespace std;
int main()
{
    int h,m;
    cin >> h >> m;
    string time[30] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    if (m<30)
    {
        if (m==0)
        {
            cout << time[h] << " o' clock" << endl;
        }
        else if (m==1)
        {
            cout << "1 minute past " << time[h] << endl;
        }
        else if (m==15)
        {
            cout << "quarter past " << time[h] << endl;
        }
        else
        {
            cout << time[m] << " minutes past " << time[h] << endl;
        }
        return 0;
    }
    else if (m>30)
    {
        if (m==59)
        {
            cout << "1 minute to " << time[h+1] << endl;
        }
        else if (m==45)
        {
            cout << "quarter to " << time[h+1] << endl;
        }
        else
        {
            cout << time[60-m] << " minutes to " << time[h+1] << endl;
        }
        return 0;

    }
    else if (m==30)
    {
        cout << "half past " << time[h];
        return 0;
    }
}
