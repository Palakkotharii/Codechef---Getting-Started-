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
        int A;
        int B;
        cin >> A >> B;
        int C;
        int D;
        cin >> C >> D;
        if (A <= C && B <= D)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
}