#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    ll n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int rev = 0;
        while (n != 0) // while(n>0)
        {
            int r = n % 10;
            rev = rev * 10 + r; // rev= rev*10 + n%10; 
            n = n / 10;
        }
        cout << rev << "\n";
    }
    return 0;
}

/*

int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,reverse=0,r;
        cin>>n;
        for(;n>0;n=n/10){
            r=n%10;
            reverse=reverse*10+r;
        }
        cout<<reverse<<endl;
    }
 */