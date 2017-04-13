#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double b,l;
    int n;
    cin >> n;
    for (int a=0; a<n; a++)
    {
        cin >> b >> l;
        cout << pow((l*l-b*b),0.5) << " " << pow((l*l+b*b),0.5) << endl;
    }
}
