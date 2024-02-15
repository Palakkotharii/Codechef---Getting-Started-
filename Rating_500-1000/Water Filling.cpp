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
        int b1;
        int b2;
        int b3;
        cin >> b1 >> b2 >> b3;

        if (b1 == 0 && b2 == 0)
        {
            cout << "Water filling time" << endl;
        }
        else if (b2 == 0 && b3 == 0)
        {
            cout << "Water filling time" << endl;
        }
        else if (b3 == 0 && b1 == 0)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
}