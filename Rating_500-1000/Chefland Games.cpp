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
        int R1, R2, R3, R4;
        cin >> R1 >> R2 >> R3 >> R4;
        if (R1 == 1 || R2 == 1 || R3 == 1 || R4 == 1)
        {
            cout << "OUT" << endl;
        }
        else
        {
            cout << "IN" << endl;
        }
    }
}
