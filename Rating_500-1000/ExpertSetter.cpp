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
        // if (y >= (x + 1) / 2)
        double apprved_ans = (double)y / x * 100;
        if (apprved_ans >= 50)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}