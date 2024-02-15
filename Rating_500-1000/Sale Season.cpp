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
        cin >> x;
        if (x <= 100)
        {
            cout << x << endl;
        }
        else if (x > 100 && x <= 1000)
        {
            int dis = 25;
            int amt = x - dis;
            cout << amt << endl;
        }
        else if (x > 1000 && x <= 5000)
        {
            int dis = 100;
            int amt = x - dis;
            cout << amt << endl;
        }
        else if (x > 5000)
        {
            int dis = 500;
            int amt = x - dis;
            cout << amt << endl;
        }
    }
}