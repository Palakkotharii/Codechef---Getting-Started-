#include <bits/stdc++.h>
using namespace std;
int main()
{
//   first two methods takes log(n) time .
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    int last = 0;
    int first = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        last = n % 10;
        while (n >= 10) // exit when numeber's value is less than 10.. ie. if that numebr is single digit.
        {
            n /= 10;
        }
        first = n;
        cout << first + last << "\n";
    }
    /*
 while (t--)
    {
        cin >> n;
        last = n % 10;
     int r=0;
     while(n>0)
     {
          r = n%10;
          n/=10;
     }
     cout<< r+ last<<"\n";
    }
    */

    /* S[0]-'0'is the method to convert  char to integer
    // using string ===> TC is O(1)
     while (t--)
        {
            cin >> n;
            string s = to_string (n);
            int len = s.length();
            int ans = (s[0]-'0') +  ( s[len-1]-'0');
            cout<<ans<<"\n";

        }
        */
    return 0;
}