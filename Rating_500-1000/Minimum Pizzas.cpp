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
        cout << (n * x + 3) / 4 << endl;
        // we added 3 inside the parentheses because we need to ensure that we round up to the nearest integer.
        // By adding 3 before dividing by 4, we ensure that even if there are a few extra slices that don't make a complete pizza, we still have to count that as an additional pizza.
    }
}