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
        int X;
        int Y;
        cin >> A >> B >> X >> Y;
        int firstmul = A * B;
        int seconmul = X * Y;
        if (seconmul >= firstmul)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}