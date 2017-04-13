#include <iostream>
using namespace std;
int main()
{
    int t=0;
    string x;
    cin >> t;
    for (int a=0; a<t; a++)
    {
        bool y=false;
        cin >> x >> x;
        for (int b=0; b<x.length(); b++)
        {
            if (x.substr(b,1) == "I")
            {
                cout << "INDIAN" << endl;
                y = true;
                break;
            }
            else if (x.substr(b,1) == "Y")
            {
                cout << "NOT INDIAN" << endl;
                y = true;
                break;
            }
        }
        if (y == false)
        {
            cout << "NOT SURE" << endl;
        }
    }
}
