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
        int Ddsa, Dtoc, Ddm;
        cin >> Ddsa >> Dtoc >> Ddm;

        int Sdsa, Stoc, Sdm;
        cin >> Sdsa >> Stoc >> Sdm;

        int ans1 = Ddsa + Dtoc + Ddm;
        int ans2 = Sdsa + Stoc + Sdm;

        if (ans1 > ans2)
        {
            cout << "DRAGON" << endl;
        }
        else if (ans1 < ans2)
        {
            cout << "SLOTH" << endl;
        }
        else if (ans1 == ans2 && Ddsa != Sdsa)
        {
            if (Ddsa > Sdsa)
            {
                cout << "DRAGON" << endl;
            }
            else
            {
                cout << "SLOTH" << endl;
            }
        }
        else if (ans1 == ans2 && Ddsa == Sdsa && Dtoc != Stoc)
        {
            if (Dtoc > Stoc)
            {
                cout << "DRAGON" << endl;
            }
            else
            {
                cout << "SLOTH" << endl;
            }
        }
        else if (ans1 == ans2 && Ddsa == Sdsa && Dtoc == Stoc && Ddm == Sdm)
        {
            cout << "TIE" << endl;
        }
    }
}