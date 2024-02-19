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
        int D[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> D[i];
        }
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (D[i] >= 1000)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}