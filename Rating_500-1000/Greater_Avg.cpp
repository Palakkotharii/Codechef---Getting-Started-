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
        float a;
        float b;
        float c;
        cin >> a >> b >> c;
        float avg = float((a + b) / 2);
        if (avg > c)
        {
            cout << "Yes " << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}