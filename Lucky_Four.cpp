#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0;
        cin >> n;
        while (n != 0)
        {
            int rem = n % 10;
            if (rem == 4)
            {
                count++;
            }
            n /= 10;
        }
        cout << count << "\n";
    }
    return 0;
}