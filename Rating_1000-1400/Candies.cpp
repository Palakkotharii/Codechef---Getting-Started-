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
        cin >> n;

        map<int, int> mp;
        for (int i = 1; i <= 2 * n; ++i)
        {

            int x;
            cin >> x;
            mp[x]++;
        }
        bool is = true;
        for (auto it : mp)
        {
            if (it.second >= 3)
            {
                is = false;
            }
        }
        if (is)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}