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
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        if (A + B + C < D)
        {
            cout << "Yes" << endl;
        }
        else if (A + B + D < C)
        {
            cout << "Yes" << endl;
        }
        else if (A + C + D < B)
        {
            cout << "Yes" << endl;
        }
        else if (B + C + D < A)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}