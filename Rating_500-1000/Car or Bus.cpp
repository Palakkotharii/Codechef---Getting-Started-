#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "Car" << endl;
        }
        else if (x < y)
        {
            cout << "Bike" << endl;
        }
        else
        {
            cout << "Same" << endl;
        }
    }
}