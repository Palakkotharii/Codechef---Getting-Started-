#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int sum = 0;
        while (n != 0)// while(n>0)
        {
            int rem = n % 10;
            sum += rem; //sum+=(n%10);
            n /= 10;
        }
        cout << sum << "\n";
    }
    return 0;
}

/*
 while(t--)
    {
        int n;
        cin>>n;

        int sum=0;

        while(n>0)
        {
            sum+=(n%10);
            n/=10;
        }

        cout<<sum<<"\n";

    }

*/

/*
 while (t--)
  {
    int n;
    cin >> n;
    int sum = 0;
    for (; n != 0; n = n / 10)
    {
      sum += n % 10;
    }
    cout << sum << endl;
  }

  	while(t--){
	    vector<int>v;
	    int n;cin>>n;
	    while(n!=0){
	        v.push_back(n%10);
	        n=n/10;
	    }
	    int sum=0;
	    for(int i=0;i<v.size();i++)
	    {
	        sum+=v[i];
	    }
	    cout<<sum<<"\n";
	}

     while(t--){
        
        int n;
        cin>>n;
        
        int result = 0;
        
        string s = to_string (n);
        for ( int i = 0; i<s.length(); i++)
            result += s[i] - '0';  // So subtracting '0' from a character would convert that character into required digit./
            
        cout<<result<<endl;
        
    }


S[0]-'0'is the method to convert to integer
*/