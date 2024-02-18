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
        int n;
        int x;
        cin >> n >> x;
        if (x >= n)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = n - x;
            int rem = ans % 4 ? 1 : 0;
            cout << (ans / 4) + rem << endl;
        }
    }
}