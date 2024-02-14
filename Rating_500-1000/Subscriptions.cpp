#include <bits/stdc++.h>
using namespace std;

int main() {
	 ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int n;
        cin>>n>>x;
        int ans=0;
        int rem= n%6;
        if(rem!=0)
        {
           ans = ((n/6)+1)*x;
            cout<<ans<<endl;
        }
        else{
            ans= (n/6)*x;
            cout<<ans<<endl;
        }
        
    }
}