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
        int k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (k >= a[i])
            {
                k = k - a[i];
                // cout<<k << "  ";
                cout << 1;
            }
            else if (k < a[i])
            {
                cout << 0;
            }
            // else if ( k==0)  no need of this else stat !!!!!
            // {
            //     cout<<0;
            // }
        }
        cout << endl;
    }
}