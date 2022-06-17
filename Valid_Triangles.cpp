#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int a, b, c;
    while (t--) // while(t>0) or while(t-- >0) or for(int i=0 ;i<t ; ++i)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    
    /*   app2
    if(d==0 || b==0 || c==0 || b+c+d!=180)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
     */

    return 0;
}


